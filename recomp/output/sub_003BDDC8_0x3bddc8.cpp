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

// Function: sub_003BDDC8
// Address: 0x3bddc8 - 0x3bde68
void sub_003BDDC8_0x3bddc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BDDC8_0x3bddc8");
#endif

    switch (ctx->pc) {
        case 0x3bddd8u: goto label_3bddd8;
        default: break;
    }

    ctx->pc = 0x3bddc8u;

    // 0x3bddc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3bddc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3bddcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3bddccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3bddd0: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x3BDDD0u;
    SET_GPR_U32(ctx, 31, 0x3BDDD8u);
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x3BDDD0u, 0x3BDDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDDD8u;
label_3bddd8:
    // 0x3bddd8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3bddd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdddc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3bdddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3bdde0: 0x2447ca48  addiu       $a3, $v0, -0x35B8
    ctx->pc = 0x3bdde0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953544));
    // 0x3bdde4: 0x8ce60014  lw          $a2, 0x14($a3)
    ctx->pc = 0x3bdde4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x42CA5Cu));
    // 0x3bdde8: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BDDE8u;
    {
        const bool branch_taken_0x3bdde8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bdde8) {
            ctx->pc = 0x3BDDFCu;
            goto label_3bddfc;
        }
    }
    ctx->pc = 0x3BDDF0u;
    // 0x3bddf0: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x3bddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x3bddf4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3BDDF4u;
    {
        const bool branch_taken_0x3bddf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDDF4u;
        // 0x3bddf8: 0x34428005  ori         $v0, $v0, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bddf4) {
            ctx->pc = 0x3BDE48u;
            goto label_3bde48;
        }
    }
    ctx->pc = 0x3BDDFCu;
label_3bddfc:
    // 0x3bddfc: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x3bddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x3bde00: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x3bde00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x3bde04: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x3bde04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3bde08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3bde08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3bde0c: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x3bde0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x3bde10: 0xace20010  sw          $v0, 0x10($a3)
    ctx->pc = 0x3bde10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
    // 0x3bde14: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x3bde14u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x3bde18: 0xace40014  sw          $a0, 0x14($a3)
    ctx->pc = 0x3bde18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
    // 0x3bde1c: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x3bde1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x3bde20: 0xfcc00018  sd          $zero, 0x18($a2)
    ctx->pc = 0x3bde20u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 0));
    // 0x3bde24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3bde24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3bde28: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x3bde28u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x3bde2c: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x3bde2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x3bde30: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3bde30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3bde34: 0x304203fe  andi        $v0, $v0, 0x3FE
    ctx->pc = 0x3bde34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1022);
    // 0x3bde38: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3bde38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3bde3c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x3bde3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x3bde40: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x3bde40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3bde44: 0xa31025  or          $v0, $a1, $v1
    ctx->pc = 0x3bde44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_3bde48:
    // 0x3bde48: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BDE48u;
    {
        const bool branch_taken_0x3bde48 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDE48u;
        // 0x3bde4c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bde48) {
            ctx->pc = 0x3BDE5Cu;
            goto label_3bde5c;
        }
    }
    ctx->pc = 0x3BDE50u;
    // 0x3bde50: 0xf  sync
    ctx->pc = 0x3bde50u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3bde54: 0x42000038  ei
    ctx->pc = 0x3bde54u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3bde58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bde58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3bde5c:
    // 0x3bde5c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BDE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BDE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDE5Cu;
        // 0x3bde60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BDE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BDE64u;
    // 0x3bde64: 0x0  nop
    ctx->pc = 0x3bde64u;
    // NOP
    ctx->pc = 0x3bde68u;
}
