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

// Function: sub_00163198
// Address: 0x163198 - 0x163228
void sub_00163198_0x163198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163198_0x163198");
#endif

    switch (ctx->pc) {
        case 0x1631c8u: goto label_1631c8;
        case 0x1631e0u: goto label_1631e0;
        case 0x1631ecu: goto label_1631ec;
        case 0x163208u: goto label_163208;
        default: break;
    }

    ctx->pc = 0x163198u;

    // 0x163198: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x163198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16319c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16319cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1631a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1631a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1631a4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1631a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1631a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1631a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1631ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1631acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1631b0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1631b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1631b4: 0x26720364  addiu       $s2, $s3, 0x364
    ctx->pc = 0x1631b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 868));
    // 0x1631b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1631b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1631bc: 0x3c140049  lui         $s4, 0x49
    ctx->pc = 0x1631bcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)73 << 16));
    // 0x1631c0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1631c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1631c4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1631c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1631c8:
    // 0x1631c8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1631c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1631cc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1631ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1631d0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1631D0u;
    {
        const bool branch_taken_0x1631d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1631D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1631D0u;
        // 0x1631d4: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1631d0) {
            ctx->pc = 0x1631F0u;
            goto label_1631f0;
        }
    }
    ctx->pc = 0x1631D8u;
    // 0x1631d8: 0xc045e9c  jal         func_117A70
    ctx->pc = 0x1631D8u;
    SET_GPR_U32(ctx, 31, 0x1631E0u);
    ctx->pc = 0x1631DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1631D8u;
    // 0x1631dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A70u, 0x1631D8u, 0x1631E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1631E0u;
label_1631e0:
    // 0x1631e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1631e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1631e4: 0xc042128  jal         func_1084A0
    ctx->pc = 0x1631E4u;
    SET_GPR_U32(ctx, 31, 0x1631ECu);
    ctx->pc = 0x1631E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1631E4u;
    // 0x1631e8: 0x26848758  addiu       $a0, $s4, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x1631E4u, 0x1631ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1631ECu;
label_1631ec:
    // 0x1631ec: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1631ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1631f0:
    // 0x1631f0: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1631f0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1631f4: 0x2e230003  sltiu       $v1, $s1, 0x3
    ctx->pc = 0x1631f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1631f8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1631F8u;
    {
        const bool branch_taken_0x1631f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1631FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1631F8u;
        // 0x1631fc: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1631f8) {
            ctx->pc = 0x1631C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1631c8;
        }
    }
    ctx->pc = 0x163200u;
    // 0x163200: 0xc058c56  jal         func_163158
    ctx->pc = 0x163200u;
    SET_GPR_U32(ctx, 31, 0x163208u);
    ctx->pc = 0x163204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163200u;
    // 0x163204: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163158u, 0x163200u, 0x163208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163208u;
label_163208:
    // 0x163208: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x163208u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16320c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16320cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x163210: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x163210u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163214: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x163214u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x163218: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x163218u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16321c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x16321cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x163220: 0x3e00008  jr          $ra
    ctx->pc = 0x163220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163220u;
        // 0x163224: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163228u;
}
