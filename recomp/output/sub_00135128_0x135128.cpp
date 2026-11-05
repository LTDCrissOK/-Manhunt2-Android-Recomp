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

// Function: sub_00135128
// Address: 0x135128 - 0x135180
void sub_00135128_0x135128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135128_0x135128");
#endif

    switch (ctx->pc) {
        case 0x135168u: goto label_135168;
        case 0x135178u: goto label_135178;
        default: break;
    }

    ctx->pc = 0x135128u;

    // 0x135128: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x135128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13512c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x13512cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135130: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x135130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x135134: 0x94c20010  lhu         $v0, 0x10($a2)
    ctx->pc = 0x135134u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x135138: 0x2444ffd0  addiu       $a0, $v0, -0x30
    ctx->pc = 0x135138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x13513c: 0x2c830010  sltiu       $v1, $a0, 0x10
    ctx->pc = 0x13513cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x135140: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x135140u;
    {
        const bool branch_taken_0x135140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x135144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135140u;
        // 0x135144: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135140) {
            ctx->pc = 0x135190u;
            return;
        }
    }
    ctx->pc = 0x135148u;
    // 0x135148: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x135148u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13514c: 0x2442e450  addiu       $v0, $v0, -0x1BB0
    ctx->pc = 0x13514cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960208));
    // 0x135150: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x135150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x135154: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x135154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x135158: 0x800008  jr          $a0
    ctx->pc = 0x135158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135160u: goto label_135160;
            case 0x135170u: goto label_135170;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135158u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x135160u;
label_135160:
    // 0x135160: 0xc04d468  jal         func_1351A0
    ctx->pc = 0x135160u;
    SET_GPR_U32(ctx, 31, 0x135168u);
    ctx->pc = 0x135164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135160u;
    // 0x135164: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351A0u, 0x135160u, 0x135168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135168u;
label_135168:
    // 0x135168: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x135168u;
    {
        const bool branch_taken_0x135168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135168u;
        // 0x13516c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135168) {
            ctx->pc = 0x135198u;
            return;
        }
    }
    ctx->pc = 0x135170u;
label_135170:
    // 0x135170: 0xc04d4a2  jal         func_135288
    ctx->pc = 0x135170u;
    SET_GPR_U32(ctx, 31, 0x135178u);
    ctx->pc = 0x135174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135170u;
    // 0x135174: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135288u, 0x135170u, 0x135178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135178u;
label_135178:
    // 0x135178: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x135178u;
    {
        const bool branch_taken_0x135178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135178u;
        // 0x13517c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135178) {
            ctx->pc = 0x135198u;
            return;
        }
    }
    ctx->pc = 0x135180u;
}
