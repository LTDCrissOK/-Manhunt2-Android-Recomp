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

// Function: sub_002B35A8
// Address: 0x2b35a8 - 0x2b3648
void sub_002B35A8_0x2b35a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B35A8_0x2b35a8");
#endif

    ctx->pc = 0x2b35a8u;

    // 0x2b35a8: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x2b35a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2b35ac: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2b35acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b35b0: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2b35b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2b35b4: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x2b35b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b35b8: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2b35b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2b35bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b35bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b35c0: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x2b35c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b35c4: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x2b35c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2b35c8: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2b35c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2b35cc: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x2b35ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b35d0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2b35d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2b35d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b35d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b35d8: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x2b35d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b35dc: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x2b35dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x2b35e0: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2b35e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2b35e4: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x2b35e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b35e8: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2b35e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2b35ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b35ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b35f0: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x2b35f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b35f4: 0x90a30005  lbu         $v1, 0x5($a1)
    ctx->pc = 0x2b35f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x2b35f8: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2b35f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2b35fc: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x2b35fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b3600: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2b3600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2b3604: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b3604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b3608: 0xa0820004  sb          $v0, 0x4($a0)
    ctx->pc = 0x2b3608u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b360c: 0x90a60006  lbu         $a2, 0x6($a1)
    ctx->pc = 0x2b360cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x2b3610: 0x61902  srl         $v1, $a2, 4
    ctx->pc = 0x2b3610u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x2b3614: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x2b3614u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2b3618: 0x30c6000f  andi        $a2, $a2, 0xF
    ctx->pc = 0x2b3618u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x2b361c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2b361cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2b3620: 0xa0830005  sb          $v1, 0x5($a0)
    ctx->pc = 0x2b3620u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b3624: 0x90a20007  lbu         $v0, 0x7($a1)
    ctx->pc = 0x2b3624u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x2b3628: 0x21902  srl         $v1, $v0, 4
    ctx->pc = 0x2b3628u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x2b362c: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x2b362cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2b3630: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2b3630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2b3634: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b3634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b3638: 0x244207d0  addiu       $v0, $v0, 0x7D0
    ctx->pc = 0x2b3638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
    // 0x2b363c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B363Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B363Cu;
        // 0x2b3640: 0xa4820006  sh          $v0, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B363Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3644u;
    // 0x2b3644: 0x0  nop
    ctx->pc = 0x2b3644u;
    // NOP
    ctx->pc = 0x2b3648u;
}
