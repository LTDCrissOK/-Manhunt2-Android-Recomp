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

// Function: sub_003A4218
// Address: 0x3a4218 - 0x3a42a0
void sub_003A4218_0x3a4218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4218_0x3a4218");
#endif

    switch (ctx->pc) {
        case 0x3a423cu: goto label_3a423c;
        case 0x3a425cu: goto label_3a425c;
        case 0x3a4264u: goto label_3a4264;
        case 0x3a426cu: goto label_3a426c;
        case 0x3a4274u: goto label_3a4274;
        case 0x3a4280u: goto label_3a4280;
        default: break;
    }

    ctx->pc = 0x3a4218u;

    // 0x3a4218: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3a4218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3a421c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a421cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4220: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x3a4220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x3a4224: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a4224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4228: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x3a4228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x3a422c: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3A422Cu;
    {
        const bool branch_taken_0x3a422c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A422Cu;
        // 0x3a4230: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a422c) {
            ctx->pc = 0x3A428Cu;
            goto label_3a428c;
        }
    }
    ctx->pc = 0x3A4234u;
    // 0x3a4234: 0xc0e9508  jal         func_3A5420
    ctx->pc = 0x3A4234u;
    SET_GPR_U32(ctx, 31, 0x3A423Cu);
    ctx->pc = 0x3A4238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4234u;
    // 0x3a4238: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5420u, 0x3A4234u, 0x3A423Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A423Cu;
label_3a423c:
    // 0x3a423c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x3a423cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x3a4240: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3a4240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3a4244: 0x24713650  addiu       $s1, $v1, 0x3650
    ctx->pc = 0x3a4244u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 13904));
    // 0x3a4248: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a4248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a424c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3A424Cu;
    {
        const bool branch_taken_0x3a424c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A424Cu;
        // 0x3a4250: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a424c) {
            ctx->pc = 0x3A4288u;
            goto label_3a4288;
        }
    }
    ctx->pc = 0x3A4254u;
    // 0x3a4254: 0xc0e92ec  jal         func_3A4BB0
    ctx->pc = 0x3A4254u;
    SET_GPR_U32(ctx, 31, 0x3A425Cu);
    ctx->pc = 0x3A4BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4BB0u, 0x3A4254u, 0x3A425Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A425Cu;
label_3a425c:
    // 0x3a425c: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A425Cu;
    SET_GPR_U32(ctx, 31, 0x3A4264u);
    ctx->pc = 0x3A4260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A425Cu;
    // 0x3a4260: 0x34048100  ori         $a0, $zero, 0x8100 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A425Cu, 0x3A4264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4264u;
label_3a4264:
    // 0x3a4264: 0xc0ee156  jal         func_3B8558
    ctx->pc = 0x3A4264u;
    SET_GPR_U32(ctx, 31, 0x3A426Cu);
    ctx->pc = 0x3A4268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4264u;
    // 0x3a4268: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8558u, 0x3A4264u, 0x3A426Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A426Cu;
label_3a426c:
    // 0x3a426c: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A426Cu;
    SET_GPR_U32(ctx, 31, 0x3A4274u);
    ctx->pc = 0x3A4270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A426Cu;
    // 0x3a4270: 0x34048101  ori         $a0, $zero, 0x8101 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33025);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A426Cu, 0x3A4274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4274u;
label_3a4274:
    // 0x3a4274: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a4274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4278: 0xc0e8ffc  jal         func_3A3FF0
    ctx->pc = 0x3A4278u;
    SET_GPR_U32(ctx, 31, 0x3A4280u);
    ctx->pc = 0x3A427Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4278u;
    // 0x3a427c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3FF0u, 0x3A4278u, 0x3A4280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4280u;
label_3a4280:
    // 0x3a4280: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A4280u;
    {
        const bool branch_taken_0x3a4280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4280u;
        // 0x3a4284: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4280) {
            ctx->pc = 0x3A4290u;
            goto label_3a4290;
        }
    }
    ctx->pc = 0x3A4288u;
label_3a4288:
    // 0x3a4288: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a4288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a428c:
    // 0x3a428c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3a428cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3a4290:
    // 0x3a4290: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x3a4290u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3a4294: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3a4294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a4298: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A429Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4298u;
        // 0x3a429c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A42A0u;
}
