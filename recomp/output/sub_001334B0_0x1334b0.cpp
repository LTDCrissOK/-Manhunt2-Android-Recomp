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

// Function: sub_001334B0
// Address: 0x1334b0 - 0x133550
void sub_001334B0_0x1334b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001334B0_0x1334b0");
#endif

    switch (ctx->pc) {
        case 0x1334e0u: goto label_1334e0;
        case 0x1334ecu: goto label_1334ec;
        case 0x1334f4u: goto label_1334f4;
        case 0x1334fcu: goto label_1334fc;
        case 0x133508u: goto label_133508;
        case 0x133514u: goto label_133514;
        case 0x133520u: goto label_133520;
        case 0x133534u: goto label_133534;
        default: break;
    }

    ctx->pc = 0x1334b0u;

    // 0x1334b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1334b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1334b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1334b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1334b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1334b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1334bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1334bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1334c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1334c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1334c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1334c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1334c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1334c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1334cc: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x1334ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1334d0: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1334D0u;
    {
        const bool branch_taken_0x1334d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1334D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1334D0u;
        // 0x1334d4: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1334d0) {
            ctx->pc = 0x1334FCu;
            goto label_1334fc;
        }
    }
    ctx->pc = 0x1334D8u;
    // 0x1334d8: 0xc042448  jal         func_109120
    ctx->pc = 0x1334D8u;
    SET_GPR_U32(ctx, 31, 0x1334E0u);
    ctx->pc = 0x109120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109120u, 0x1334D8u, 0x1334E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1334E0u;
label_1334e0:
    // 0x1334e0: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1334e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1334e4: 0xc04b4a2  jal         func_12D288
    ctx->pc = 0x1334E4u;
    SET_GPR_U32(ctx, 31, 0x1334ECu);
    ctx->pc = 0x1334E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1334E4u;
    // 0x1334e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D288u, 0x1334E4u, 0x1334ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1334ECu;
label_1334ec:
    // 0x1334ec: 0xc04ccda  jal         func_133368
    ctx->pc = 0x1334ECu;
    SET_GPR_U32(ctx, 31, 0x1334F4u);
    ctx->pc = 0x1334F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1334ECu;
    // 0x1334f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133368u, 0x1334ECu, 0x1334F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1334F4u;
label_1334f4:
    // 0x1334f4: 0xc04cc10  jal         func_133040
    ctx->pc = 0x1334F4u;
    SET_GPR_U32(ctx, 31, 0x1334FCu);
    ctx->pc = 0x1334F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1334F4u;
    // 0x1334f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133040u, 0x1334F4u, 0x1334FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1334FCu;
label_1334fc:
    // 0x1334fc: 0xae530024  sw          $s3, 0x24($s2)
    ctx->pc = 0x1334fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 19));
    // 0x133500: 0xc042448  jal         func_109120
    ctx->pc = 0x133500u;
    SET_GPR_U32(ctx, 31, 0x133508u);
    ctx->pc = 0x133504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133500u;
    // 0x133504: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109120u, 0x133500u, 0x133508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133508u;
label_133508:
    // 0x133508: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x133508u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13350c: 0xc042450  jal         func_109140
    ctx->pc = 0x13350Cu;
    SET_GPR_U32(ctx, 31, 0x133514u);
    ctx->pc = 0x133510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13350Cu;
    // 0x133510: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109140u, 0x13350Cu, 0x133514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133514u;
label_133514:
    // 0x133514: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x133514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133518: 0xc042452  jal         func_109148
    ctx->pc = 0x133518u;
    SET_GPR_U32(ctx, 31, 0x133520u);
    ctx->pc = 0x13351Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133518u;
    // 0x13351c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109148u, 0x133518u, 0x133520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133520u;
label_133520:
    // 0x133520: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x133520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x133524: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x133524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133528: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x133528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13352c: 0xc04b472  jal         func_12D1C8
    ctx->pc = 0x13352Cu;
    SET_GPR_U32(ctx, 31, 0x133534u);
    ctx->pc = 0x133530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13352Cu;
    // 0x133530: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D1C8u, 0x13352Cu, 0x133534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133534u;
label_133534:
    // 0x133534: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x133534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133538: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x133538u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13353c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13353cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133540: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x133540u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x133544: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x133544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x133548: 0x3e00008  jr          $ra
    ctx->pc = 0x133548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13354Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133548u;
        // 0x13354c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133550u;
}
