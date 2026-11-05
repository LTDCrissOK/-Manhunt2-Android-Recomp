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

// Function: sub_00307390
// Address: 0x307390 - 0x3073f0
void sub_00307390_0x307390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307390_0x307390");
#endif

    switch (ctx->pc) {
        case 0x3073a4u: goto label_3073a4;
        case 0x3073ccu: goto label_3073cc;
        case 0x3073e0u: goto label_3073e0;
        default: break;
    }

    ctx->pc = 0x307390u;

    // 0x307390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x307390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x307394: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x307394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x307398: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x307398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x30739c: 0xc0909ac  jal         func_2426B0
    ctx->pc = 0x30739Cu;
    SET_GPR_U32(ctx, 31, 0x3073A4u);
    ctx->pc = 0x3073A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30739Cu;
    // 0x3073a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2426B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2426B0u, 0x30739Cu, 0x3073A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3073A4u;
label_3073a4:
    // 0x3073a4: 0x8e030418  lw          $v1, 0x418($s0)
    ctx->pc = 0x3073a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
    // 0x3073a8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x3073a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3073ac: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3073ACu;
    {
        const bool branch_taken_0x3073ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3073B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3073ACu;
        // 0x3073b0: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3073ac) {
            ctx->pc = 0x3073BCu;
            goto label_3073bc;
        }
    }
    ctx->pc = 0x3073B4u;
    // 0x3073b4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3073B4u;
    {
        const bool branch_taken_0x3073b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3073b4) {
            ctx->pc = 0x3073D4u;
            goto label_3073d4;
        }
    }
    ctx->pc = 0x3073BCu;
label_3073bc:
    // 0x3073bc: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x3073bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x3073c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3073c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3073c4: 0xc0bcc6a  jal         func_2F31A8
    ctx->pc = 0x3073C4u;
    SET_GPR_U32(ctx, 31, 0x3073CCu);
    ctx->pc = 0x3073C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3073C4u;
    // 0x3073c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F31A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F31A8u, 0x3073C4u, 0x3073CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3073CCu;
label_3073cc:
    // 0x3073cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3073CCu;
    {
        const bool branch_taken_0x3073cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3073D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3073CCu;
        // 0x3073d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3073cc) {
            ctx->pc = 0x3073E4u;
            goto label_3073e4;
        }
    }
    ctx->pc = 0x3073D4u;
label_3073d4:
    // 0x3073d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3073d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3073d8: 0xc0bcc6a  jal         func_2F31A8
    ctx->pc = 0x3073D8u;
    SET_GPR_U32(ctx, 31, 0x3073E0u);
    ctx->pc = 0x3073DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3073D8u;
    // 0x3073dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F31A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F31A8u, 0x3073D8u, 0x3073E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3073E0u;
label_3073e0:
    // 0x3073e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3073e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3073e4:
    // 0x3073e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3073e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3073e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3073E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3073ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3073E8u;
        // 0x3073ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3073E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3073F0u;
}
