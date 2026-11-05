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

// Function: sub_0017D1A0
// Address: 0x17d1a0 - 0x17d270
void sub_0017D1A0_0x17d1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D1A0_0x17d1a0");
#endif

    switch (ctx->pc) {
        case 0x17d1e0u: goto label_17d1e0;
        case 0x17d1e8u: goto label_17d1e8;
        case 0x17d1f0u: goto label_17d1f0;
        case 0x17d1f8u: goto label_17d1f8;
        case 0x17d200u: goto label_17d200;
        case 0x17d208u: goto label_17d208;
        case 0x17d210u: goto label_17d210;
        case 0x17d218u: goto label_17d218;
        case 0x17d220u: goto label_17d220;
        case 0x17d228u: goto label_17d228;
        case 0x17d230u: goto label_17d230;
        case 0x17d238u: goto label_17d238;
        case 0x17d240u: goto label_17d240;
        case 0x17d250u: goto label_17d250;
        case 0x17d258u: goto label_17d258;
        default: break;
    }

    ctx->pc = 0x17d1a0u;

    // 0x17d1a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17d1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17d1a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17d1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17d1a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17d1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17d1ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17d1acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d1b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17d1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17d1b4: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x17d1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x17d1b8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x17D1B8u;
    {
        const bool branch_taken_0x17d1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D1B8u;
        // 0x17d1bc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d1b8) {
            ctx->pc = 0x17D1F8u;
            goto label_17d1f8;
        }
    }
    ctx->pc = 0x17D1C0u;
    // 0x17d1c0: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x17d1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x17d1c4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17D1C4u;
    {
        const bool branch_taken_0x17d1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d1c4) {
            ctx->pc = 0x17D1F8u;
            goto label_17d1f8;
        }
    }
    ctx->pc = 0x17D1CCu;
    // 0x17d1cc: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x17D1CCu;
    {
        const bool branch_taken_0x17d1cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d1cc) {
            ctx->pc = 0x17D1F8u;
            goto label_17d1f8;
        }
    }
    ctx->pc = 0x17D1D4u;
    // 0x17d1d4: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x17d1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x17d1d8: 0xc05f5d2  jal         func_17D748
    ctx->pc = 0x17D1D8u;
    SET_GPR_U32(ctx, 31, 0x17D1E0u);
    ctx->pc = 0x17D1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D1D8u;
    // 0x17d1dc: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D748u, 0x17D1D8u, 0x17D1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D1E0u;
label_17d1e0:
    // 0x17d1e0: 0xc05f5e4  jal         func_17D790
    ctx->pc = 0x17D1E0u;
    SET_GPR_U32(ctx, 31, 0x17D1E8u);
    ctx->pc = 0x17D1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D1E0u;
    // 0x17d1e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D790u, 0x17D1E0u, 0x17D1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D1E8u;
label_17d1e8:
    // 0x17d1e8: 0xc05f5f4  jal         func_17D7D0
    ctx->pc = 0x17D1E8u;
    SET_GPR_U32(ctx, 31, 0x17D1F0u);
    ctx->pc = 0x17D1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D1E8u;
    // 0x17d1ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D7D0u, 0x17D1E8u, 0x17D1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D1F0u;
label_17d1f0:
    // 0x17d1f0: 0xc05f60e  jal         func_17D838
    ctx->pc = 0x17D1F0u;
    SET_GPR_U32(ctx, 31, 0x17D1F8u);
    ctx->pc = 0x17D1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D1F0u;
    // 0x17d1f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D838u, 0x17D1F0u, 0x17D1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D1F8u;
label_17d1f8:
    // 0x17d1f8: 0xc05fb48  jal         func_17ED20
    ctx->pc = 0x17D1F8u;
    SET_GPR_U32(ctx, 31, 0x17D200u);
    ctx->pc = 0x17D1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D1F8u;
    // 0x17d1fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ED20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ED20u, 0x17D1F8u, 0x17D200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D200u;
label_17d200:
    // 0x17d200: 0xc05f62a  jal         func_17D8A8
    ctx->pc = 0x17D200u;
    SET_GPR_U32(ctx, 31, 0x17D208u);
    ctx->pc = 0x17D204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D200u;
    // 0x17d204: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D8A8u, 0x17D200u, 0x17D208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D208u;
label_17d208:
    // 0x17d208: 0xc05f64a  jal         func_17D928
    ctx->pc = 0x17D208u;
    SET_GPR_U32(ctx, 31, 0x17D210u);
    ctx->pc = 0x17D20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D208u;
    // 0x17d20c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D928u, 0x17D208u, 0x17D210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D210u;
label_17d210:
    // 0x17d210: 0xc05f5fe  jal         func_17D7F8
    ctx->pc = 0x17D210u;
    SET_GPR_U32(ctx, 31, 0x17D218u);
    ctx->pc = 0x17D214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D210u;
    // 0x17d214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D7F8u, 0x17D210u, 0x17D218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D218u;
label_17d218:
    // 0x17d218: 0xc05f6ac  jal         func_17DAB0
    ctx->pc = 0x17D218u;
    SET_GPR_U32(ctx, 31, 0x17D220u);
    ctx->pc = 0x17D21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D218u;
    // 0x17d21c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DAB0u, 0x17D218u, 0x17D220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D220u;
label_17d220:
    // 0x17d220: 0xc05f6e2  jal         func_17DB88
    ctx->pc = 0x17D220u;
    SET_GPR_U32(ctx, 31, 0x17D228u);
    ctx->pc = 0x17D224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D220u;
    // 0x17d224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DB88u, 0x17D220u, 0x17D228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D228u;
label_17d228:
    // 0x17d228: 0xc05f740  jal         func_17DD00
    ctx->pc = 0x17D228u;
    SET_GPR_U32(ctx, 31, 0x17D230u);
    ctx->pc = 0x17D22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D228u;
    // 0x17d22c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DD00u, 0x17D228u, 0x17D230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D230u;
label_17d230:
    // 0x17d230: 0xc05f75c  jal         func_17DD70
    ctx->pc = 0x17D230u;
    SET_GPR_U32(ctx, 31, 0x17D238u);
    ctx->pc = 0x17D234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D230u;
    // 0x17d234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DD70u, 0x17D230u, 0x17D238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D238u;
label_17d238:
    // 0x17d238: 0xc05fba4  jal         func_17EE90
    ctx->pc = 0x17D238u;
    SET_GPR_U32(ctx, 31, 0x17D240u);
    ctx->pc = 0x17D23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D238u;
    // 0x17d23c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EE90u, 0x17D238u, 0x17D240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D240u;
label_17d240:
    // 0x17d240: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x17d240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x17d244: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17d244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d248: 0xc05f786  jal         func_17DE18
    ctx->pc = 0x17D248u;
    SET_GPR_U32(ctx, 31, 0x17D250u);
    ctx->pc = 0x17D24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D248u;
    // 0x17d24c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DE18u, 0x17D248u, 0x17D250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D250u;
label_17d250:
    // 0x17d250: 0xc05f8a2  jal         func_17E288
    ctx->pc = 0x17D250u;
    SET_GPR_U32(ctx, 31, 0x17D258u);
    ctx->pc = 0x17D254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D250u;
    // 0x17d254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E288u, 0x17D250u, 0x17D258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D258u;
label_17d258:
    // 0x17d258: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17d258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d25c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17d25cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17d260: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17d260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d264: 0x3e00008  jr          $ra
    ctx->pc = 0x17D264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D264u;
        // 0x17d268: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D26Cu;
    // 0x17d26c: 0x0  nop
    ctx->pc = 0x17d26cu;
    // NOP
    ctx->pc = 0x17d270u;
}
