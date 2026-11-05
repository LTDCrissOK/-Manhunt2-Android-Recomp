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

// Function: sub_00299210
// Address: 0x299210 - 0x299280
void sub_00299210_0x299210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299210_0x299210");
#endif

    switch (ctx->pc) {
        case 0x299240u: goto label_299240;
        case 0x29924cu: goto label_29924c;
        case 0x299258u: goto label_299258;
        case 0x29926cu: goto label_29926c;
        default: break;
    }

    ctx->pc = 0x299210u;

    // 0x299210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x299210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x299214: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x299214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x299218: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x299218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29921c: 0x24423300  addiu       $v0, $v0, 0x3300
    ctx->pc = 0x29921cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13056));
    // 0x299220: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x299220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x299224: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x299224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299228: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x299228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29922c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29922cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299230: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x299230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    // 0x299234: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x299234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x299238: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x299238u;
    SET_GPR_U32(ctx, 31, 0x299240u);
    ctx->pc = 0x29923Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299238u;
    // 0x29923c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x299238u, 0x299240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299240u;
label_299240:
    // 0x299240: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x299240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x299244: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x299244u;
    SET_GPR_U32(ctx, 31, 0x29924Cu);
    ctx->pc = 0x299248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299244u;
    // 0x299248: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x299244u, 0x29924Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29924Cu;
label_29924c:
    // 0x29924c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29924cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299250: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x299250u;
    SET_GPR_U32(ctx, 31, 0x299258u);
    ctx->pc = 0x299254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299250u;
    // 0x299254: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x299250u, 0x299258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299258u;
label_299258:
    // 0x299258: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x299258u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x29925c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29925Cu;
    {
        const bool branch_taken_0x29925c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x299260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29925Cu;
        // 0x299260: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29925c) {
            ctx->pc = 0x299270u;
            goto label_299270;
        }
    }
    ctx->pc = 0x299264u;
    // 0x299264: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x299264u;
    SET_GPR_U32(ctx, 31, 0x29926Cu);
    ctx->pc = 0x299268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299264u;
    // 0x299268: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x299264u, 0x29926Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29926Cu;
label_29926c:
    // 0x29926c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29926cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_299270:
    // 0x299270: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x299270u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x299274: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x299274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299278: 0x3e00008  jr          $ra
    ctx->pc = 0x299278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299278u;
        // 0x29927c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299280u;
}
