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

// Function: sub_003B06B8
// Address: 0x3b06b8 - 0x3b0778
void sub_003B06B8_0x3b06b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B06B8_0x3b06b8");
#endif

    ctx->pc = 0x3b06b8u;

    // 0x3b06b8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3b06b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b06bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3b06bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3b06c0: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3b06c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b06c4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3b06c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b06c8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3b06c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3b06cc: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x3b06ccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b06d0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3b06d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b06d4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3b06d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3b06d8: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x3b06d8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b06dc: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3b06dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b06e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3b06e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3b06e4: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x3b06e4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b06e8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3b06e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b06ec: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x3b06ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3b06f0: 0x90860001  lbu         $a2, 0x1($a0)
    ctx->pc = 0x3b06f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3b06f4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3b06f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3b06f8: 0x90870003  lbu         $a3, 0x3($a0)
    ctx->pc = 0x3b06f8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3b06fc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3b06fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3b0700: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x3b0700u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x3b0704: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3b0704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3b0708: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x3b0708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x3b070c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x3b070cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x3b0710: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3b0710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3b0714: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3b0714u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3b0718: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3b0718u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b071c: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x3b071cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3b0720: 0x90860001  lbu         $a2, 0x1($a0)
    ctx->pc = 0x3b0720u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3b0724: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x3b0724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x3b0728: 0x90870003  lbu         $a3, 0x3($a0)
    ctx->pc = 0x3b0728u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3b072c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3b072cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3b0730: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3b0730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3b0734: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x3b0734u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x3b0738: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x3b0738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x3b073c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x3b073cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x3b0740: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b0740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b0744: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x3b0744u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x3b0748: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3b0748u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b074c: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x3b074cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3b0750: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x3b0750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x3b0754: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3b0754u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3b0758: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b0758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b075c: 0xa4a3000c  sh          $v1, 0xC($a1)
    ctx->pc = 0x3b075cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b0760: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3b0760u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b0764: 0xa0a2003c  sb          $v0, 0x3C($a1)
    ctx->pc = 0x3b0764u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 60), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b0768: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x3b0768u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3b076c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B076Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B076Cu;
        // 0x3b0770: 0xa0a3003d  sb          $v1, 0x3D($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 61), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B076Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B0774u;
    // 0x3b0774: 0x0  nop
    ctx->pc = 0x3b0774u;
    // NOP
    ctx->pc = 0x3b0778u;
}
