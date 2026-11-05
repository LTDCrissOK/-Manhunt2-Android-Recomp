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

// Function: sub_003B0798
// Address: 0x3b0798 - 0x3b0888
void sub_003B0798_0x3b0798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0798_0x3b0798");
#endif

    ctx->pc = 0x3b0798u;

    // 0x3b0798: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3b0798u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b079c: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x3b079cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3b07a0: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x3b07a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x3b07a4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3b07a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3b07a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b07a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b07ac: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x3b07acu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b07b0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3b07b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b07b4: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x3b07b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3b07b8: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x3b07b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x3b07bc: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3b07bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3b07c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b07c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b07c4: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x3b07c4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b07c8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3b07c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b07cc: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x3b07ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3b07d0: 0x90860001  lbu         $a2, 0x1($a0)
    ctx->pc = 0x3b07d0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3b07d4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3b07d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3b07d8: 0x90870003  lbu         $a3, 0x3($a0)
    ctx->pc = 0x3b07d8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3b07dc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3b07dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3b07e0: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x3b07e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x3b07e4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3b07e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3b07e8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x3b07e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x3b07ec: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x3b07ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x3b07f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3b07f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3b07f4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3b07f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3b07f8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3b07f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b07fc: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x3b07fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3b0800: 0x90860001  lbu         $a2, 0x1($a0)
    ctx->pc = 0x3b0800u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3b0804: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x3b0804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x3b0808: 0x90870003  lbu         $a3, 0x3($a0)
    ctx->pc = 0x3b0808u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3b080c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3b080cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3b0810: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x3b0810u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x3b0814: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3b0814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3b0818: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x3b0818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x3b081c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x3b081cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x3b0820: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b0820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b0824: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x3b0824u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x3b0828: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3b0828u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b082c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x3b082cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3b0830: 0x90860001  lbu         $a2, 0x1($a0)
    ctx->pc = 0x3b0830u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3b0834: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3b0834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3b0838: 0x90870003  lbu         $a3, 0x3($a0)
    ctx->pc = 0x3b0838u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3b083c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3b083cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3b0840: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x3b0840u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x3b0844: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3b0844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3b0848: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x3b0848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x3b084c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x3b084cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x3b0850: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3b0850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3b0854: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x3b0854u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x3b0858: 0x90860001  lbu         $a2, 0x1($a0)
    ctx->pc = 0x3b0858u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3b085c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3b085cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b0860: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x3b0860u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3b0864: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x3b0864u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x3b0868: 0x90870003  lbu         $a3, 0x3($a0)
    ctx->pc = 0x3b0868u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3b086c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3b086cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3b0870: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3b0870u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3b0874: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x3b0874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x3b0878: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x3b0878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x3b087c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3b087cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3b0880: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0880u;
        // 0x3b0884: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B0888u;
}
