/*=========================================================================
 *
 *  Copyright Insight Software Consortium
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0.txt
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *=========================================================================*/
#ifndef __itkNumberToString_hxx
#define __itkNumberToString_hxx

#include "itkNumberToString.h"
#include "itkNumericTraits.h"

#include <sstream>

namespace itk
{

template<typename TValueType>
std::string NumberToString<TValueType>::operator() (TValueType val)
{
  std::ostringstream output;
  output << static_cast<typename NumericTraits<TValueType>::PrintType>(val);

  return output.str();
}

}
#endif