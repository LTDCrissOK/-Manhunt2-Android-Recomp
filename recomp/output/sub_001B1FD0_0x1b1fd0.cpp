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

// Function: sub_001B1FD0
// Address: 0x1b1fd0 - 0x1b2058
void sub_001B1FD0_0x1b1fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1FD0_0x1b1fd0");
#endif

    switch (ctx->pc) {
        case 0x1b1ffcu: goto label_1b1ffc;
        case 0x1b2010u: goto label_1b2010;
        case 0x1b2034u: goto label_1b2034;
        case 0x1b2044u: goto label_1b2044;
        default: break;
    }

    ctx->pc = 0x1b1fd0u;

    // 0x1b1fd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1fd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b1fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b1fd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b1fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b1fdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b1fdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1fe0: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x1b1fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1b1fe4: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1b1fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x1b1fe8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1b1fe8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b1fec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1FECu;
    {
        const bool branch_taken_0x1b1fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1FECu;
        // 0x1b1ff0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1fec) {
            ctx->pc = 0x1B2004u;
            goto label_1b2004;
        }
    }
    ctx->pc = 0x1B1FF4u;
    // 0x1b1ff4: 0xc06c6c8  jal         func_1B1B20
    ctx->pc = 0x1B1FF4u;
    SET_GPR_U32(ctx, 31, 0x1B1FFCu);
    ctx->pc = 0x1B1FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1FF4u;
    // 0x1b1ff8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1B20u, 0x1B1FF4u, 0x1B1FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1FFCu;
label_1b1ffc:
    // 0x1b1ffc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1FFCu;
    {
        const bool branch_taken_0x1b1ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1FFCu;
        // 0x1b2000: 0x8e020084  lw          $v0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1ffc) {
            ctx->pc = 0x1B2014u;
            goto label_1b2014;
        }
    }
    ctx->pc = 0x1B2004u;
label_1b2004:
    // 0x1b2004: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2008: 0xc06c6c8  jal         func_1B1B20
    ctx->pc = 0x1B2008u;
    SET_GPR_U32(ctx, 31, 0x1B2010u);
    ctx->pc = 0x1B200Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2008u;
    // 0x1b200c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1B20u, 0x1B2008u, 0x1B2010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2010u;
label_1b2010:
    // 0x1b2010: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x1b2010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1b2014:
    // 0x1b2014: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1b2014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1b2018: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1b2018u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b201c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B201Cu;
    {
        const bool branch_taken_0x1b201c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B201Cu;
        // 0x1b2020: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b201c) {
            ctx->pc = 0x1B203Cu;
            goto label_1b203c;
        }
    }
    ctx->pc = 0x1B2024u;
    // 0x1b2024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2028: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x1b2028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x1b202c: 0xc06c546  jal         func_1B1518
    ctx->pc = 0x1B202Cu;
    SET_GPR_U32(ctx, 31, 0x1B2034u);
    ctx->pc = 0x1B2030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B202Cu;
    // 0x1b2030: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1518u, 0x1B202Cu, 0x1B2034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2034u;
label_1b2034:
    // 0x1b2034: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2034u;
    {
        const bool branch_taken_0x1b2034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2034u;
        // 0x1b2038: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2034) {
            ctx->pc = 0x1B2048u;
            goto label_1b2048;
        }
    }
    ctx->pc = 0x1B203Cu;
label_1b203c:
    // 0x1b203c: 0xc06c2da  jal         func_1B0B68
    ctx->pc = 0x1B203Cu;
    SET_GPR_U32(ctx, 31, 0x1B2044u);
    ctx->pc = 0x1B2040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B203Cu;
    // 0x1b2040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0B68u, 0x1B203Cu, 0x1B2044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2044u;
label_1b2044:
    // 0x1b2044: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2044u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b2048:
    // 0x1b2048: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b2048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b204c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B204Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B204Cu;
        // 0x1b2050: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B204Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2054u;
    // 0x1b2054: 0x0  nop
    ctx->pc = 0x1b2054u;
    // NOP
    ctx->pc = 0x1b2058u;
}
