#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E4FB0
// Address: 0x1e4fb0 - 0x1e5120
void sub_001E4FB0_0x1e4fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4FB0_0x1e4fb0");
#endif

    ctx->pc = 0x1e4fb0u;

    // 0x1e4fb0: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x1e4fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x1e4fb4: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x1e4fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x1e4fb8: 0x8cc291d8  lw          $v0, -0x6E28($a2)
    ctx->pc = 0x1e4fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F91D8u));
    // 0x1e4fbc: 0x8ce591d4  lw          $a1, -0x6E2C($a3)
    ctx->pc = 0x1e4fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3F91D4u));
    // 0x1e4fc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e4fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e4fc4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1e4fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1e4fc8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e4fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e4fcc: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1e4fccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e4fd0: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e4fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4fd4: 0x8cc291d8  lw          $v0, -0x6E28($a2)
    ctx->pc = 0x1e4fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294939096)));
    // 0x1e4fd8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1e4fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1e4fdc: 0x8ce591d4  lw          $a1, -0x6E2C($a3)
    ctx->pc = 0x1e4fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294939092)));
    // 0x1e4fe0: 0x24845b40  addiu       $a0, $a0, 0x5B40
    ctx->pc = 0x1e4fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23360));
    // 0x1e4fe4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e4fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e4fe8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1e4fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1e4fec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e4fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e4ff0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1e4ff0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e4ff4: 0xf8610010  sqc2        $vf1, 0x10($v1)
    ctx->pc = 0x1e4ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4ff8: 0x8cc291d8  lw          $v0, -0x6E28($a2)
    ctx->pc = 0x1e4ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294939096)));
    // 0x1e4ffc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1e4ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e5000: 0x8ce491d4  lw          $a0, -0x6E2C($a3)
    ctx->pc = 0x1e5000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294939092)));
    // 0x1e5004: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e5004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e5008: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e5008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e500c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e500cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5010: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e5010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e5014: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e5014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5018: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1e5018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1e501c: 0x8cc291d8  lw          $v0, -0x6E28($a2)
    ctx->pc = 0x1e501cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294939096)));
    // 0x1e5020: 0x8ce491d4  lw          $a0, -0x6E2C($a3)
    ctx->pc = 0x1e5020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294939092)));
    // 0x1e5024: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e5024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e5028: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e5028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e502c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e502cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5030: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x1e5030u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x1e5034: 0x8cc291d8  lw          $v0, -0x6E28($a2)
    ctx->pc = 0x1e5034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294939096)));
    // 0x1e5038: 0x8ce491d4  lw          $a0, -0x6E2C($a3)
    ctx->pc = 0x1e5038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294939092)));
    // 0x1e503c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e503cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e5040: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e5040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e5044: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e5044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5048: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x1e5048u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x1e504c: 0x8cc291d8  lw          $v0, -0x6E28($a2)
    ctx->pc = 0x1e504cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294939096)));
    // 0x1e5050: 0x8ce491d4  lw          $a0, -0x6E2C($a3)
    ctx->pc = 0x1e5050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294939092)));
    // 0x1e5054: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e5054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e5058: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e5058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e505c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e505cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5060: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x1e5060u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x1e5064: 0x8cc291d8  lw          $v0, -0x6E28($a2)
    ctx->pc = 0x1e5064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294939096)));
    // 0x1e5068: 0x8ce491d4  lw          $a0, -0x6E2C($a3)
    ctx->pc = 0x1e5068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294939092)));
    // 0x1e506c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e506cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e5070: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e5070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e5074: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e5074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5078: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x1e5078u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x1e507c: 0x8cc291d8  lw          $v0, -0x6E28($a2)
    ctx->pc = 0x1e507cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294939096)));
    // 0x1e5080: 0x8ce491d4  lw          $a0, -0x6E2C($a3)
    ctx->pc = 0x1e5080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294939092)));
    // 0x1e5084: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e5084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e5088: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e5088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e508c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e508cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5090: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x1e5090u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x1e5094: 0x8cc291d8  lw          $v0, -0x6E28($a2)
    ctx->pc = 0x1e5094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294939096)));
    // 0x1e5098: 0x8ce491d4  lw          $a0, -0x6E2C($a3)
    ctx->pc = 0x1e5098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294939092)));
    // 0x1e509c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e509cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e50a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e50a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e50a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e50a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e50a8: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x1e50a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x1e50ac: 0x8cc291d8  lw          $v0, -0x6E28($a2)
    ctx->pc = 0x1e50acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294939096)));
    // 0x1e50b0: 0x8ce491d4  lw          $a0, -0x6E2C($a3)
    ctx->pc = 0x1e50b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294939092)));
    // 0x1e50b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e50b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e50b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e50b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e50bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e50bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e50c0: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x1e50c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x1e50c4: 0x8cc291d8  lw          $v0, -0x6E28($a2)
    ctx->pc = 0x1e50c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294939096)));
    // 0x1e50c8: 0x8ce491d4  lw          $a0, -0x6E2C($a3)
    ctx->pc = 0x1e50c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294939092)));
    // 0x1e50cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e50ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e50d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e50d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e50d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e50d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e50d8: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x1e50d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x1e50dc: 0x8cc291d8  lw          $v0, -0x6E28($a2)
    ctx->pc = 0x1e50dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294939096)));
    // 0x1e50e0: 0x8ce491d4  lw          $a0, -0x6E2C($a3)
    ctx->pc = 0x1e50e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294939092)));
    // 0x1e50e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e50e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e50e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e50e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e50ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e50ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e50f0: 0xac650044  sw          $a1, 0x44($v1)
    ctx->pc = 0x1e50f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 5));
    // 0x1e50f4: 0x8cc291d8  lw          $v0, -0x6E28($a2)
    ctx->pc = 0x1e50f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294939096)));
    // 0x1e50f8: 0x8ce491d4  lw          $a0, -0x6E2C($a3)
    ctx->pc = 0x1e50f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294939092)));
    // 0x1e50fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e50fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e5100: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e5100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e5104: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e5104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5108: 0xac600050  sw          $zero, 0x50($v1)
    ctx->pc = 0x1e5108u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
    // 0x1e510c: 0x8cc291d8  lw          $v0, -0x6E28($a2)
    ctx->pc = 0x1e510cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294939096)));
    // 0x1e5110: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e5110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e5114: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5114u;
        // 0x1e5118: 0xacc291d8  sw          $v0, -0x6E28($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294939096), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E511Cu;
    // 0x1e511c: 0x0  nop
    ctx->pc = 0x1e511cu;
    // NOP
    ctx->pc = 0x1e5120u;
}
