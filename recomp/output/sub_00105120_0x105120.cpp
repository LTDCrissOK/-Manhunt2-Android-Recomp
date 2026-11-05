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

// Function: sub_00105120
// Address: 0x105120 - 0x1051c8
void sub_00105120_0x105120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105120_0x105120");
#endif

    switch (ctx->pc) {
        case 0x105160u: goto label_105160;
        case 0x10516cu: goto label_10516c;
        case 0x105184u: goto label_105184;
        case 0x105198u: goto label_105198;
        case 0x1051acu: goto label_1051ac;
        default: break;
    }

    ctx->pc = 0x105120u;

    // 0x105120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x105120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x105124: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x105124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x105128: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x105128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10512c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10512cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105130: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x105130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x105134: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x105134u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105138: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x105138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10513c: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x10513cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x105140: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x105140u;
    {
        const bool branch_taken_0x105140 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x105144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105140u;
        // 0x105144: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105140) {
            ctx->pc = 0x10518Cu;
            goto label_10518c;
        }
    }
    ctx->pc = 0x105148u;
    // 0x105148: 0x8ca3fff0  lw          $v1, -0x10($a1)
    ctx->pc = 0x105148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967280)));
    // 0x10514c: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x10514cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x105150: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x105150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x105154: 0x50b00009  beql        $a1, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x105154u;
    {
        const bool branch_taken_0x105154 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        if (branch_taken_0x105154) {
            ctx->pc = 0x105158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105154u;
            // 0x105158: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10517Cu;
            goto label_10517c;
        }
    }
    ctx->pc = 0x10515Cu;
    // 0x10515c: 0x2610ffe8  addiu       $s0, $s0, -0x18
    ctx->pc = 0x10515cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
label_105160:
    // 0x105160: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x105160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105164: 0xc041120  jal         func_104480
    ctx->pc = 0x105164u;
    SET_GPR_U32(ctx, 31, 0x10516Cu);
    ctx->pc = 0x105168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105164u;
    // 0x105168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104480u, 0x105164u, 0x10516Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10516Cu;
label_10516c:
    // 0x10516c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x10516cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x105170: 0x1450fffb  bne         $v0, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x105170u;
    {
        const bool branch_taken_0x105170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x105174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105170u;
        // 0x105174: 0x2610ffe8  addiu       $s0, $s0, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105170) {
            ctx->pc = 0x105160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105160;
        }
    }
    ctx->pc = 0x105178u;
    // 0x105178: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x105178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_10517c:
    // 0x10517c: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x10517Cu;
    SET_GPR_U32(ctx, 31, 0x105184u);
    ctx->pc = 0x105180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10517Cu;
    // 0x105180: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x10517Cu, 0x105184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105184u;
label_105184:
    // 0x105184: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x105184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x105188: 0xa2200022  sb          $zero, 0x22($s1)
    ctx->pc = 0x105188u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 34), (uint8_t)GPR_U32(ctx, 0));
label_10518c:
    // 0x10518c: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x10518cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x105190: 0xc040004  jal         func_100010
    ctx->pc = 0x105190u;
    SET_GPR_U32(ctx, 31, 0x105198u);
    ctx->pc = 0x105194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105190u;
    // 0x105194: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100010u, 0x105190u, 0x105198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105198u;
label_105198:
    // 0x105198: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x105198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x10519c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10519Cu;
    {
        const bool branch_taken_0x10519c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1051A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10519Cu;
        // 0x1051a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10519c) {
            ctx->pc = 0x1051B0u;
            goto label_1051b0;
        }
    }
    ctx->pc = 0x1051A4u;
    // 0x1051a4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1051A4u;
    SET_GPR_U32(ctx, 31, 0x1051ACu);
    ctx->pc = 0x1051A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1051A4u;
    // 0x1051a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1051A4u, 0x1051ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1051ACu;
label_1051ac:
    // 0x1051ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1051acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1051b0:
    // 0x1051b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1051b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1051b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1051b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1051b8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1051b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1051bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1051BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1051C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1051BCu;
        // 0x1051c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1051BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1051C4u;
    // 0x1051c4: 0x0  nop
    ctx->pc = 0x1051c4u;
    // NOP
    ctx->pc = 0x1051c8u;
}
