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

// Function: sub_0020D120
// Address: 0x20d120 - 0x20d1b8
void sub_0020D120_0x20d120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D120_0x20d120");
#endif

    switch (ctx->pc) {
        case 0x20d13cu: goto label_20d13c;
        case 0x20d150u: goto label_20d150;
        case 0x20d15cu: goto label_20d15c;
        case 0x20d170u: goto label_20d170;
        case 0x20d18cu: goto label_20d18c;
        case 0x20d19cu: goto label_20d19c;
        case 0x20d1a8u: goto label_20d1a8;
        default: break;
    }

    ctx->pc = 0x20d120u;

    // 0x20d120: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20d120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x20d124: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20d124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20d128: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x20d128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x20d12c: 0x24a51120  addiu       $a1, $a1, 0x1120
    ctx->pc = 0x20d12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4384));
    // 0x20d130: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x20d130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x20d134: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20D134u;
    SET_GPR_U32(ctx, 31, 0x20D13Cu);
    ctx->pc = 0x20D138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D134u;
    // 0x20d138: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20D134u, 0x20D13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D13Cu;
label_20d13c:
    // 0x20d13c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d140: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20D140u;
    {
        const bool branch_taken_0x20d140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D140u;
        // 0x20d144: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d140) {
            ctx->pc = 0x20D164u;
            goto label_20d164;
        }
    }
    ctx->pc = 0x20D148u;
    // 0x20d148: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20D148u;
    SET_GPR_U32(ctx, 31, 0x20D150u);
    ctx->pc = 0x20D14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D148u;
    // 0x20d14c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20D148u, 0x20D150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D150u;
label_20d150:
    // 0x20d150: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20d150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d154: 0xc0893f6  jal         func_224FD8
    ctx->pc = 0x20D154u;
    SET_GPR_U32(ctx, 31, 0x20D15Cu);
    ctx->pc = 0x20D158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D154u;
    // 0x20d158: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224FD8u, 0x20D154u, 0x20D15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D15Cu;
label_20d15c:
    // 0x20d15c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x20D15Cu;
    {
        const bool branch_taken_0x20d15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D15Cu;
        // 0x20d160: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d15c) {
            ctx->pc = 0x20D1ACu;
            goto label_20d1ac;
        }
    }
    ctx->pc = 0x20D164u;
label_20d164:
    // 0x20d164: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d168: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20D168u;
    SET_GPR_U32(ctx, 31, 0x20D170u);
    ctx->pc = 0x20D16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D168u;
    // 0x20d16c: 0x24a51118  addiu       $a1, $a1, 0x1118 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20D168u, 0x20D170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D170u;
label_20d170:
    // 0x20d170: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d174: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20D174u;
    {
        const bool branch_taken_0x20d174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D174u;
        // 0x20d178: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d174) {
            ctx->pc = 0x20D194u;
            goto label_20d194;
        }
    }
    ctx->pc = 0x20D17Cu;
    // 0x20d17c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x20d17cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20d180: 0x24a51328  addiu       $a1, $a1, 0x1328
    ctx->pc = 0x20d180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4904));
    // 0x20d184: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x20D184u;
    SET_GPR_U32(ctx, 31, 0x20D18Cu);
    ctx->pc = 0x20D188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D184u;
    // 0x20d188: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x20D184u, 0x20D18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D18Cu;
label_20d18c:
    // 0x20d18c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20D18Cu;
    {
        const bool branch_taken_0x20d18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D18Cu;
        // 0x20d190: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d18c) {
            ctx->pc = 0x20D1A8u;
            goto label_20d1a8;
        }
    }
    ctx->pc = 0x20D194u;
label_20d194:
    // 0x20d194: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20D194u;
    SET_GPR_U32(ctx, 31, 0x20D19Cu);
    ctx->pc = 0x20D198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D194u;
    // 0x20d198: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20D194u, 0x20D19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D19Cu;
label_20d19c:
    // 0x20d19c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20d19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d1a0: 0xc0893f6  jal         func_224FD8
    ctx->pc = 0x20D1A0u;
    SET_GPR_U32(ctx, 31, 0x20D1A8u);
    ctx->pc = 0x20D1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D1A0u;
    // 0x20d1a4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224FD8u, 0x20D1A0u, 0x20D1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D1A8u;
label_20d1a8:
    // 0x20d1a8: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x20d1a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_20d1ac:
    // 0x20d1ac: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x20d1acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20d1b0: 0x3e00008  jr          $ra
    ctx->pc = 0x20D1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D1B0u;
        // 0x20d1b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D1B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D1B8u;
}
