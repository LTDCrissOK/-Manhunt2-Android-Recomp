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

// Function: sub_0031C788
// Address: 0x31c788 - 0x31ce30
void sub_0031C788_0x31c788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C788_0x31c788");
#endif

    switch (ctx->pc) {
        case 0x31c7c8u: goto label_31c7c8;
        case 0x31c7d0u: goto label_31c7d0;
        case 0x31c7d8u: goto label_31c7d8;
        case 0x31c7e4u: goto label_31c7e4;
        case 0x31c800u: goto label_31c800;
        case 0x31c80cu: goto label_31c80c;
        case 0x31c824u: goto label_31c824;
        case 0x31c840u: goto label_31c840;
        case 0x31c84cu: goto label_31c84c;
        case 0x31c864u: goto label_31c864;
        case 0x31c880u: goto label_31c880;
        case 0x31c88cu: goto label_31c88c;
        case 0x31c8a4u: goto label_31c8a4;
        case 0x31c8c0u: goto label_31c8c0;
        case 0x31c8d8u: goto label_31c8d8;
        case 0x31c8f4u: goto label_31c8f4;
        case 0x31c90cu: goto label_31c90c;
        case 0x31c924u: goto label_31c924;
        case 0x31c93cu: goto label_31c93c;
        case 0x31c954u: goto label_31c954;
        case 0x31c970u: goto label_31c970;
        case 0x31c988u: goto label_31c988;
        case 0x31c9a4u: goto label_31c9a4;
        case 0x31c9bcu: goto label_31c9bc;
        case 0x31c9c8u: goto label_31c9c8;
        case 0x31c9e0u: goto label_31c9e0;
        case 0x31c9f8u: goto label_31c9f8;
        case 0x31ca04u: goto label_31ca04;
        case 0x31ca1cu: goto label_31ca1c;
        case 0x31ca38u: goto label_31ca38;
        case 0x31ca5cu: goto label_31ca5c;
        case 0x31ca78u: goto label_31ca78;
        case 0x31ca9cu: goto label_31ca9c;
        case 0x31cab8u: goto label_31cab8;
        case 0x31cadcu: goto label_31cadc;
        case 0x31caf8u: goto label_31caf8;
        case 0x31cb1cu: goto label_31cb1c;
        case 0x31cb38u: goto label_31cb38;
        case 0x31cb5cu: goto label_31cb5c;
        case 0x31cb78u: goto label_31cb78;
        case 0x31cb9cu: goto label_31cb9c;
        case 0x31cbb8u: goto label_31cbb8;
        case 0x31cbdcu: goto label_31cbdc;
        case 0x31cbf8u: goto label_31cbf8;
        case 0x31cc1cu: goto label_31cc1c;
        case 0x31cc38u: goto label_31cc38;
        case 0x31cc5cu: goto label_31cc5c;
        case 0x31cc78u: goto label_31cc78;
        case 0x31cc9cu: goto label_31cc9c;
        case 0x31ccb8u: goto label_31ccb8;
        case 0x31ccdcu: goto label_31ccdc;
        case 0x31ccf8u: goto label_31ccf8;
        case 0x31cd14u: goto label_31cd14;
        case 0x31cd2cu: goto label_31cd2c;
        case 0x31cd48u: goto label_31cd48;
        case 0x31cd64u: goto label_31cd64;
        case 0x31cd80u: goto label_31cd80;
        case 0x31cd98u: goto label_31cd98;
        case 0x31cdb4u: goto label_31cdb4;
        case 0x31cdd0u: goto label_31cdd0;
        case 0x31cdecu: goto label_31cdec;
        case 0x31cdf8u: goto label_31cdf8;
        case 0x31ce0cu: goto label_31ce0c;
        default: break;
    }

    ctx->pc = 0x31c788u;

    // 0x31c788: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x31c788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x31c78c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x31c78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x31c790: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c794: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31c794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c798: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x31c798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x31c79c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x31c79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x31c7a0: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x31c7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x31c7a4: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x31c7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x31c7a8: 0x3c110059  lui         $s1, 0x59
    ctx->pc = 0x31c7a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
    // 0x31c7ac: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x31c7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x31c7b0: 0x26325870  addiu       $s2, $s1, 0x5870
    ctx->pc = 0x31c7b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 22640));
    // 0x31c7b4: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x31c7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x31c7b8: 0x265400b0  addiu       $s4, $s2, 0xB0
    ctx->pc = 0x31c7b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
    // 0x31c7bc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x31c7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x31c7c0: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x31C7C0u;
    SET_GPR_U32(ctx, 31, 0x31C7C8u);
    ctx->pc = 0x31C7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C7C0u;
    // 0x31c7c4: 0x265500c0  addiu       $s5, $s2, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x31C7C0u, 0x31C7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C7C8u;
label_31c7c8:
    // 0x31c7c8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x31C7C8u;
    SET_GPR_U32(ctx, 31, 0x31C7D0u);
    ctx->pc = 0x31C7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C7C8u;
    // 0x31c7cc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x31C7C8u, 0x31C7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C7D0u;
label_31c7d0:
    // 0x31c7d0: 0x10000186  b           . + 4 + (0x186 << 2)
    ctx->pc = 0x31C7D0u;
    {
        const bool branch_taken_0x31c7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C7D0u;
        // 0x31c7d4: 0x27b30010  addiu       $s3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c7d0) {
            ctx->pc = 0x31CDECu;
            goto label_31cdec;
        }
    }
    ctx->pc = 0x31C7D8u;
label_31c7d8:
    // 0x31c7d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c7dc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C7DCu;
    SET_GPR_U32(ctx, 31, 0x31C7E4u);
    ctx->pc = 0x31C7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C7DCu;
    // 0x31c7e0: 0x24a53f00  addiu       $a1, $a1, 0x3F00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C7DCu, 0x31C7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C7E4u;
label_31c7e4:
    // 0x31c7e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c7e8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31C7E8u;
    {
        const bool branch_taken_0x31c7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C7E8u;
        // 0x31c7ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c7e8) {
            ctx->pc = 0x31C814u;
            goto label_31c814;
        }
    }
    ctx->pc = 0x31C7F0u;
    // 0x31c7f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x31c7f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c7f4: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x31c7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x31c7f8: 0xc09df62  jal         func_277D88
    ctx->pc = 0x31C7F8u;
    SET_GPR_U32(ctx, 31, 0x31C800u);
    ctx->pc = 0x31C7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C7F8u;
    // 0x31c7fc: 0x27a70018  addiu       $a3, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x31C7F8u, 0x31C800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C800u;
label_31c800:
    // 0x31c800: 0x26245870  addiu       $a0, $s1, 0x5870
    ctx->pc = 0x31c800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 22640));
    // 0x31c804: 0xc0b8f2e  jal         func_2E3CB8
    ctx->pc = 0x31C804u;
    SET_GPR_U32(ctx, 31, 0x31C80Cu);
    ctx->pc = 0x31C808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C804u;
    // 0x31c808: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3CB8u, 0x31C804u, 0x31C80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C80Cu;
label_31c80c:
    // 0x31c80c: 0x10000178  b           . + 4 + (0x178 << 2)
    ctx->pc = 0x31C80Cu;
    {
        const bool branch_taken_0x31c80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C80Cu;
        // 0x31c810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c80c) {
            ctx->pc = 0x31CDF0u;
            goto label_31cdf0;
        }
    }
    ctx->pc = 0x31C814u;
label_31c814:
    // 0x31c814: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31c814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31c818: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c81c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C81Cu;
    SET_GPR_U32(ctx, 31, 0x31C824u);
    ctx->pc = 0x31C820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C81Cu;
    // 0x31c820: 0x24a53f20  addiu       $a1, $a1, 0x3F20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C81Cu, 0x31C824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C824u;
label_31c824:
    // 0x31c824: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c828: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31C828u;
    {
        const bool branch_taken_0x31c828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C828u;
        // 0x31c82c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c828) {
            ctx->pc = 0x31C854u;
            goto label_31c854;
        }
    }
    ctx->pc = 0x31C830u;
    // 0x31c830: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x31c830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c834: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x31c834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x31c838: 0xc09df62  jal         func_277D88
    ctx->pc = 0x31C838u;
    SET_GPR_U32(ctx, 31, 0x31C840u);
    ctx->pc = 0x31C83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C838u;
    // 0x31c83c: 0x27a70018  addiu       $a3, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x31C838u, 0x31C840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C840u;
label_31c840:
    // 0x31c840: 0x26245870  addiu       $a0, $s1, 0x5870
    ctx->pc = 0x31c840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 22640));
    // 0x31c844: 0xc0b8f26  jal         func_2E3C98
    ctx->pc = 0x31C844u;
    SET_GPR_U32(ctx, 31, 0x31C84Cu);
    ctx->pc = 0x31C848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C844u;
    // 0x31c848: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3C98u, 0x31C844u, 0x31C84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C84Cu;
label_31c84c:
    // 0x31c84c: 0x10000168  b           . + 4 + (0x168 << 2)
    ctx->pc = 0x31C84Cu;
    {
        const bool branch_taken_0x31c84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C84Cu;
        // 0x31c850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c84c) {
            ctx->pc = 0x31CDF0u;
            goto label_31cdf0;
        }
    }
    ctx->pc = 0x31C854u;
label_31c854:
    // 0x31c854: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31c854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31c858: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c85c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C85Cu;
    SET_GPR_U32(ctx, 31, 0x31C864u);
    ctx->pc = 0x31C860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C85Cu;
    // 0x31c860: 0x24a53f40  addiu       $a1, $a1, 0x3F40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C85Cu, 0x31C864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C864u;
label_31c864:
    // 0x31c864: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c868: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31C868u;
    {
        const bool branch_taken_0x31c868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C868u;
        // 0x31c86c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c868) {
            ctx->pc = 0x31C894u;
            goto label_31c894;
        }
    }
    ctx->pc = 0x31C870u;
    // 0x31c870: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x31c870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c874: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x31c874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x31c878: 0xc09df62  jal         func_277D88
    ctx->pc = 0x31C878u;
    SET_GPR_U32(ctx, 31, 0x31C880u);
    ctx->pc = 0x31C87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C878u;
    // 0x31c87c: 0x27a70018  addiu       $a3, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x31C878u, 0x31C880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C880u;
label_31c880:
    // 0x31c880: 0x26245870  addiu       $a0, $s1, 0x5870
    ctx->pc = 0x31c880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 22640));
    // 0x31c884: 0xc0b8f36  jal         func_2E3CD8
    ctx->pc = 0x31C884u;
    SET_GPR_U32(ctx, 31, 0x31C88Cu);
    ctx->pc = 0x31C888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C884u;
    // 0x31c888: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3CD8u, 0x31C884u, 0x31C88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C88Cu;
label_31c88c:
    // 0x31c88c: 0x10000158  b           . + 4 + (0x158 << 2)
    ctx->pc = 0x31C88Cu;
    {
        const bool branch_taken_0x31c88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C88Cu;
        // 0x31c890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c88c) {
            ctx->pc = 0x31CDF0u;
            goto label_31cdf0;
        }
    }
    ctx->pc = 0x31C894u;
label_31c894:
    // 0x31c894: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31c894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31c898: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c89c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C89Cu;
    SET_GPR_U32(ctx, 31, 0x31C8A4u);
    ctx->pc = 0x31C8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C89Cu;
    // 0x31c8a0: 0x24a53f60  addiu       $a1, $a1, 0x3F60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C89Cu, 0x31C8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C8A4u;
label_31c8a4:
    // 0x31c8a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c8a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31C8A8u;
    {
        const bool branch_taken_0x31c8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C8A8u;
        // 0x31c8ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c8a8) {
            ctx->pc = 0x31C8C8u;
            goto label_31c8c8;
        }
    }
    ctx->pc = 0x31C8B0u;
    // 0x31c8b0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x31c8b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c8b4: 0x26860004  addiu       $a2, $s4, 0x4
    ctx->pc = 0x31c8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x31c8b8: 0xc09df62  jal         func_277D88
    ctx->pc = 0x31C8B8u;
    SET_GPR_U32(ctx, 31, 0x31C8C0u);
    ctx->pc = 0x31C8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C8B8u;
    // 0x31c8bc: 0x26870008  addiu       $a3, $s4, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x31C8B8u, 0x31C8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C8C0u;
label_31c8c0:
    // 0x31c8c0: 0x1000014b  b           . + 4 + (0x14B << 2)
    ctx->pc = 0x31C8C0u;
    {
        const bool branch_taken_0x31c8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C8C0u;
        // 0x31c8c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c8c0) {
            ctx->pc = 0x31CDF0u;
            goto label_31cdf0;
        }
    }
    ctx->pc = 0x31C8C8u;
label_31c8c8:
    // 0x31c8c8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31c8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31c8cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c8d0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C8D0u;
    SET_GPR_U32(ctx, 31, 0x31C8D8u);
    ctx->pc = 0x31C8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C8D0u;
    // 0x31c8d4: 0x24a53f70  addiu       $a1, $a1, 0x3F70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C8D0u, 0x31C8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C8D8u;
label_31c8d8:
    // 0x31c8d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c8dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31C8DCu;
    {
        const bool branch_taken_0x31c8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C8DCu;
        // 0x31c8e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c8dc) {
            ctx->pc = 0x31C8FCu;
            goto label_31c8fc;
        }
    }
    ctx->pc = 0x31C8E4u;
    // 0x31c8e4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x31c8e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c8e8: 0x26a60004  addiu       $a2, $s5, 0x4
    ctx->pc = 0x31c8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x31c8ec: 0xc09df62  jal         func_277D88
    ctx->pc = 0x31C8ECu;
    SET_GPR_U32(ctx, 31, 0x31C8F4u);
    ctx->pc = 0x31C8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C8ECu;
    // 0x31c8f0: 0x26a70008  addiu       $a3, $s5, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x31C8ECu, 0x31C8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C8F4u;
label_31c8f4:
    // 0x31c8f4: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x31C8F4u;
    {
        const bool branch_taken_0x31c8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C8F4u;
        // 0x31c8f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c8f4) {
            ctx->pc = 0x31CDF0u;
            goto label_31cdf0;
        }
    }
    ctx->pc = 0x31C8FCu;
label_31c8fc:
    // 0x31c8fc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31c8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31c900: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c904: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C904u;
    SET_GPR_U32(ctx, 31, 0x31C90Cu);
    ctx->pc = 0x31C908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C904u;
    // 0x31c908: 0x24a53f80  addiu       $a1, $a1, 0x3F80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C904u, 0x31C90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C90Cu;
label_31c90c:
    // 0x31c90c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c910: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31C910u;
    {
        const bool branch_taken_0x31c910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C910u;
        // 0x31c914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c910) {
            ctx->pc = 0x31C92Cu;
            goto label_31c92c;
        }
    }
    ctx->pc = 0x31C918u;
    // 0x31c918: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x31c918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x31c91c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x31C91Cu;
    SET_GPR_U32(ctx, 31, 0x31C924u);
    ctx->pc = 0x31C920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C91Cu;
    // 0x31c920: 0x24a558e8  addiu       $a1, $a1, 0x58E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x31C91Cu, 0x31C924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C924u;
label_31c924:
    // 0x31c924: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x31C924u;
    {
        const bool branch_taken_0x31c924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C924u;
        // 0x31c928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c924) {
            ctx->pc = 0x31CDF0u;
            goto label_31cdf0;
        }
    }
    ctx->pc = 0x31C92Cu;
label_31c92c:
    // 0x31c92c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31c92cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31c930: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c934: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C934u;
    SET_GPR_U32(ctx, 31, 0x31C93Cu);
    ctx->pc = 0x31C938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C934u;
    // 0x31c938: 0x24a53f90  addiu       $a1, $a1, 0x3F90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C934u, 0x31C93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C93Cu;
label_31c93c:
    // 0x31c93c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c940: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31C940u;
    {
        const bool branch_taken_0x31c940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C940u;
        // 0x31c944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c940) {
            ctx->pc = 0x31C960u;
            goto label_31c960;
        }
    }
    ctx->pc = 0x31C948u;
    // 0x31c948: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x31c948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x31c94c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x31C94Cu;
    SET_GPR_U32(ctx, 31, 0x31C954u);
    ctx->pc = 0x31C950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C94Cu;
    // 0x31c950: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x31C94Cu, 0x31C954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C954u;
label_31c954:
    // 0x31c954: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x31c954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31c958: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x31C958u;
    {
        const bool branch_taken_0x31c958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C958u;
        // 0x31c95c: 0xe6400610  swc1        $f0, 0x610($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1552), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c958) {
            ctx->pc = 0x31CDECu;
            goto label_31cdec;
        }
    }
    ctx->pc = 0x31C960u;
label_31c960:
    // 0x31c960: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31c960u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31c964: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c968: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C968u;
    SET_GPR_U32(ctx, 31, 0x31C970u);
    ctx->pc = 0x31C96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C968u;
    // 0x31c96c: 0x24a53fa8  addiu       $a1, $a1, 0x3FA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C968u, 0x31C970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C970u;
label_31c970:
    // 0x31c970: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c974: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31C974u;
    {
        const bool branch_taken_0x31c974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C974u;
        // 0x31c978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c974) {
            ctx->pc = 0x31C994u;
            goto label_31c994;
        }
    }
    ctx->pc = 0x31C97Cu;
    // 0x31c97c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x31c97cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x31c980: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x31C980u;
    SET_GPR_U32(ctx, 31, 0x31C988u);
    ctx->pc = 0x31C984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C980u;
    // 0x31c984: 0x27a50024  addiu       $a1, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x31C980u, 0x31C988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C988u;
label_31c988:
    // 0x31c988: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x31c988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31c98c: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x31C98Cu;
    {
        const bool branch_taken_0x31c98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C98Cu;
        // 0x31c990: 0xe6400614  swc1        $f0, 0x614($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c98c) {
            ctx->pc = 0x31CDECu;
            goto label_31cdec;
        }
    }
    ctx->pc = 0x31C994u;
label_31c994:
    // 0x31c994: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31c994u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31c998: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c99c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C99Cu;
    SET_GPR_U32(ctx, 31, 0x31C9A4u);
    ctx->pc = 0x31C9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C99Cu;
    // 0x31c9a0: 0x24a53fc0  addiu       $a1, $a1, 0x3FC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C99Cu, 0x31C9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C9A4u;
label_31c9a4:
    // 0x31c9a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c9a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31C9A8u;
    {
        const bool branch_taken_0x31c9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C9A8u;
        // 0x31c9ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c9a8) {
            ctx->pc = 0x31C9D0u;
            goto label_31c9d0;
        }
    }
    ctx->pc = 0x31C9B0u;
    // 0x31c9b0: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x31c9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x31c9b4: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x31C9B4u;
    SET_GPR_U32(ctx, 31, 0x31C9BCu);
    ctx->pc = 0x31C9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C9B4u;
    // 0x31c9b8: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x31C9B4u, 0x31C9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C9BCu;
label_31c9bc:
    // 0x31c9bc: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x31c9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31c9c0: 0xc0b8f4c  jal         func_2E3D30
    ctx->pc = 0x31C9C0u;
    SET_GPR_U32(ctx, 31, 0x31C9C8u);
    ctx->pc = 0x31C9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C9C0u;
    // 0x31c9c4: 0x26245870  addiu       $a0, $s1, 0x5870 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 22640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3D30u, 0x31C9C0u, 0x31C9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C9C8u;
label_31c9c8:
    // 0x31c9c8: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x31C9C8u;
    {
        const bool branch_taken_0x31c9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C9C8u;
        // 0x31c9cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c9c8) {
            ctx->pc = 0x31CDF0u;
            goto label_31cdf0;
        }
    }
    ctx->pc = 0x31C9D0u;
label_31c9d0:
    // 0x31c9d0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31c9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31c9d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c9d8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C9D8u;
    SET_GPR_U32(ctx, 31, 0x31C9E0u);
    ctx->pc = 0x31C9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C9D8u;
    // 0x31c9dc: 0x24a53fd0  addiu       $a1, $a1, 0x3FD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C9D8u, 0x31C9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C9E0u;
label_31c9e0:
    // 0x31c9e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c9e4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31C9E4u;
    {
        const bool branch_taken_0x31c9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C9E4u;
        // 0x31c9e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c9e4) {
            ctx->pc = 0x31CA0Cu;
            goto label_31ca0c;
        }
    }
    ctx->pc = 0x31C9ECu;
    // 0x31c9ec: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x31c9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x31c9f0: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x31C9F0u;
    SET_GPR_U32(ctx, 31, 0x31C9F8u);
    ctx->pc = 0x31C9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C9F0u;
    // 0x31c9f4: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x31C9F0u, 0x31C9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C9F8u;
label_31c9f8:
    // 0x31c9f8: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x31c9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31c9fc: 0xc0b8f50  jal         func_2E3D40
    ctx->pc = 0x31C9FCu;
    SET_GPR_U32(ctx, 31, 0x31CA04u);
    ctx->pc = 0x31CA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C9FCu;
    // 0x31ca00: 0x26245870  addiu       $a0, $s1, 0x5870 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 22640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3D40u, 0x31C9FCu, 0x31CA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CA04u;
label_31ca04:
    // 0x31ca04: 0x100000fa  b           . + 4 + (0xFA << 2)
    ctx->pc = 0x31CA04u;
    {
        const bool branch_taken_0x31ca04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CA04u;
        // 0x31ca08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ca04) {
            ctx->pc = 0x31CDF0u;
            goto label_31cdf0;
        }
    }
    ctx->pc = 0x31CA0Cu;
label_31ca0c:
    // 0x31ca0c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31ca0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31ca10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31ca10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ca14: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31CA14u;
    SET_GPR_U32(ctx, 31, 0x31CA1Cu);
    ctx->pc = 0x31CA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CA14u;
    // 0x31ca18: 0x24a53fe8  addiu       $a1, $a1, 0x3FE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31CA14u, 0x31CA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CA1Cu;
label_31ca1c:
    // 0x31ca1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31ca1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31ca20: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31CA20u;
    {
        const bool branch_taken_0x31ca20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CA20u;
        // 0x31ca24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ca20) {
            ctx->pc = 0x31CA4Cu;
            goto label_31ca4c;
        }
    }
    ctx->pc = 0x31CA28u;
    // 0x31ca28: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x31ca28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31ca2c: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x31ca2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x31ca30: 0xc09df62  jal         func_277D88
    ctx->pc = 0x31CA30u;
    SET_GPR_U32(ctx, 31, 0x31CA38u);
    ctx->pc = 0x31CA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CA30u;
    // 0x31ca34: 0x27a70018  addiu       $a3, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x31CA30u, 0x31CA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CA38u;
label_31ca38:
    // 0x31ca38: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x31ca38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31ca3c: 0x26245870  addiu       $a0, $s1, 0x5870
    ctx->pc = 0x31ca3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 22640));
    // 0x31ca40: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x31ca40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x31ca44: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x31CA44u;
    {
        const bool branch_taken_0x31ca44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CA44u;
        // 0x31ca48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ca44) {
            ctx->pc = 0x31CD74u;
            goto label_31cd74;
        }
    }
    ctx->pc = 0x31CA4Cu;
label_31ca4c:
    // 0x31ca4c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31ca4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31ca50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31ca50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ca54: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31CA54u;
    SET_GPR_U32(ctx, 31, 0x31CA5Cu);
    ctx->pc = 0x31CA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CA54u;
    // 0x31ca58: 0x24a54000  addiu       $a1, $a1, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31CA54u, 0x31CA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CA5Cu;
label_31ca5c:
    // 0x31ca5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31ca5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31ca60: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31CA60u;
    {
        const bool branch_taken_0x31ca60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CA60u;
        // 0x31ca64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ca60) {
            ctx->pc = 0x31CA8Cu;
            goto label_31ca8c;
        }
    }
    ctx->pc = 0x31CA68u;
    // 0x31ca68: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x31ca68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31ca6c: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x31ca6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x31ca70: 0xc09df62  jal         func_277D88
    ctx->pc = 0x31CA70u;
    SET_GPR_U32(ctx, 31, 0x31CA78u);
    ctx->pc = 0x31CA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CA70u;
    // 0x31ca74: 0x27a70018  addiu       $a3, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x31CA70u, 0x31CA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CA78u;
label_31ca78:
    // 0x31ca78: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x31ca78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31ca7c: 0x26245870  addiu       $a0, $s1, 0x5870
    ctx->pc = 0x31ca7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 22640));
    // 0x31ca80: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x31ca80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x31ca84: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x31CA84u;
    {
        const bool branch_taken_0x31ca84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CA84u;
        // 0x31ca88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ca84) {
            ctx->pc = 0x31CD08u;
            goto label_31cd08;
        }
    }
    ctx->pc = 0x31CA8Cu;
label_31ca8c:
    // 0x31ca8c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31ca8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31ca90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31ca90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ca94: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31CA94u;
    SET_GPR_U32(ctx, 31, 0x31CA9Cu);
    ctx->pc = 0x31CA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CA94u;
    // 0x31ca98: 0x24a54018  addiu       $a1, $a1, 0x4018 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31CA94u, 0x31CA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CA9Cu;
label_31ca9c:
    // 0x31ca9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31ca9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31caa0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31CAA0u;
    {
        const bool branch_taken_0x31caa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CAA0u;
        // 0x31caa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31caa0) {
            ctx->pc = 0x31CACCu;
            goto label_31cacc;
        }
    }
    ctx->pc = 0x31CAA8u;
    // 0x31caa8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x31caa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31caac: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x31caacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x31cab0: 0xc09df62  jal         func_277D88
    ctx->pc = 0x31CAB0u;
    SET_GPR_U32(ctx, 31, 0x31CAB8u);
    ctx->pc = 0x31CAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CAB0u;
    // 0x31cab4: 0x27a70018  addiu       $a3, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x31CAB0u, 0x31CAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CAB8u;
label_31cab8:
    // 0x31cab8: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x31cab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31cabc: 0x26245870  addiu       $a0, $s1, 0x5870
    ctx->pc = 0x31cabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 22640));
    // 0x31cac0: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x31cac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x31cac4: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x31CAC4u;
    {
        const bool branch_taken_0x31cac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CAC4u;
        // 0x31cac8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cac4) {
            ctx->pc = 0x31CD74u;
            goto label_31cd74;
        }
    }
    ctx->pc = 0x31CACCu;
label_31cacc:
    // 0x31cacc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31caccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31cad0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31cad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cad4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31CAD4u;
    SET_GPR_U32(ctx, 31, 0x31CADCu);
    ctx->pc = 0x31CAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CAD4u;
    // 0x31cad8: 0x24a54030  addiu       $a1, $a1, 0x4030 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31CAD4u, 0x31CADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CADCu;
label_31cadc:
    // 0x31cadc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31cadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31cae0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31CAE0u;
    {
        const bool branch_taken_0x31cae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CAE0u;
        // 0x31cae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cae0) {
            ctx->pc = 0x31CB0Cu;
            goto label_31cb0c;
        }
    }
    ctx->pc = 0x31CAE8u;
    // 0x31cae8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x31cae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31caec: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x31caecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x31caf0: 0xc09df62  jal         func_277D88
    ctx->pc = 0x31CAF0u;
    SET_GPR_U32(ctx, 31, 0x31CAF8u);
    ctx->pc = 0x31CAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CAF0u;
    // 0x31caf4: 0x27a70018  addiu       $a3, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x31CAF0u, 0x31CAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CAF8u;
label_31caf8:
    // 0x31caf8: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x31caf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31cafc: 0x26245870  addiu       $a0, $s1, 0x5870
    ctx->pc = 0x31cafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 22640));
    // 0x31cb00: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x31cb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x31cb04: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x31CB04u;
    {
        const bool branch_taken_0x31cb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CB04u;
        // 0x31cb08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cb04) {
            ctx->pc = 0x31CD08u;
            goto label_31cd08;
        }
    }
    ctx->pc = 0x31CB0Cu;
label_31cb0c:
    // 0x31cb0c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31cb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31cb10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31cb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cb14: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31CB14u;
    SET_GPR_U32(ctx, 31, 0x31CB1Cu);
    ctx->pc = 0x31CB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CB14u;
    // 0x31cb18: 0x24a54050  addiu       $a1, $a1, 0x4050 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31CB14u, 0x31CB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CB1Cu;
label_31cb1c:
    // 0x31cb1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31cb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31cb20: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31CB20u;
    {
        const bool branch_taken_0x31cb20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CB20u;
        // 0x31cb24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cb20) {
            ctx->pc = 0x31CB4Cu;
            goto label_31cb4c;
        }
    }
    ctx->pc = 0x31CB28u;
    // 0x31cb28: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x31cb28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31cb2c: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x31cb2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x31cb30: 0xc09df62  jal         func_277D88
    ctx->pc = 0x31CB30u;
    SET_GPR_U32(ctx, 31, 0x31CB38u);
    ctx->pc = 0x31CB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CB30u;
    // 0x31cb34: 0x27a70018  addiu       $a3, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x31CB30u, 0x31CB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CB38u;
label_31cb38:
    // 0x31cb38: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x31cb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31cb3c: 0x26245870  addiu       $a0, $s1, 0x5870
    ctx->pc = 0x31cb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 22640));
    // 0x31cb40: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x31cb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x31cb44: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x31CB44u;
    {
        const bool branch_taken_0x31cb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CB44u;
        // 0x31cb48: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cb44) {
            ctx->pc = 0x31CD74u;
            goto label_31cd74;
        }
    }
    ctx->pc = 0x31CB4Cu;
label_31cb4c:
    // 0x31cb4c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31cb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31cb50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31cb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cb54: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31CB54u;
    SET_GPR_U32(ctx, 31, 0x31CB5Cu);
    ctx->pc = 0x31CB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CB54u;
    // 0x31cb58: 0x24a54068  addiu       $a1, $a1, 0x4068 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31CB54u, 0x31CB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CB5Cu;
label_31cb5c:
    // 0x31cb5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31cb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31cb60: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31CB60u;
    {
        const bool branch_taken_0x31cb60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CB60u;
        // 0x31cb64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cb60) {
            ctx->pc = 0x31CB8Cu;
            goto label_31cb8c;
        }
    }
    ctx->pc = 0x31CB68u;
    // 0x31cb68: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x31cb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31cb6c: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x31cb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x31cb70: 0xc09df62  jal         func_277D88
    ctx->pc = 0x31CB70u;
    SET_GPR_U32(ctx, 31, 0x31CB78u);
    ctx->pc = 0x31CB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CB70u;
    // 0x31cb74: 0x27a70018  addiu       $a3, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x31CB70u, 0x31CB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CB78u;
label_31cb78:
    // 0x31cb78: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x31cb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31cb7c: 0x26245870  addiu       $a0, $s1, 0x5870
    ctx->pc = 0x31cb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 22640));
    // 0x31cb80: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x31cb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x31cb84: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x31CB84u;
    {
        const bool branch_taken_0x31cb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CB84u;
        // 0x31cb88: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cb84) {
            ctx->pc = 0x31CD08u;
            goto label_31cd08;
        }
    }
    ctx->pc = 0x31CB8Cu;
label_31cb8c:
    // 0x31cb8c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31cb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31cb90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31cb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cb94: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31CB94u;
    SET_GPR_U32(ctx, 31, 0x31CB9Cu);
    ctx->pc = 0x31CB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CB94u;
    // 0x31cb98: 0x24a54080  addiu       $a1, $a1, 0x4080 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31CB94u, 0x31CB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CB9Cu;
label_31cb9c:
    // 0x31cb9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31cb9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31cba0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31CBA0u;
    {
        const bool branch_taken_0x31cba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CBA0u;
        // 0x31cba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cba0) {
            ctx->pc = 0x31CBCCu;
            goto label_31cbcc;
        }
    }
    ctx->pc = 0x31CBA8u;
    // 0x31cba8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x31cba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31cbac: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x31cbacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x31cbb0: 0xc09df62  jal         func_277D88
    ctx->pc = 0x31CBB0u;
    SET_GPR_U32(ctx, 31, 0x31CBB8u);
    ctx->pc = 0x31CBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CBB0u;
    // 0x31cbb4: 0x27a70018  addiu       $a3, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x31CBB0u, 0x31CBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CBB8u;
label_31cbb8:
    // 0x31cbb8: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x31cbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31cbbc: 0x26245870  addiu       $a0, $s1, 0x5870
    ctx->pc = 0x31cbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 22640));
    // 0x31cbc0: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x31cbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x31cbc4: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x31CBC4u;
    {
        const bool branch_taken_0x31cbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CBC4u;
        // 0x31cbc8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cbc4) {
            ctx->pc = 0x31CD74u;
            goto label_31cd74;
        }
    }
    ctx->pc = 0x31CBCCu;
label_31cbcc:
    // 0x31cbcc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31cbccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31cbd0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31cbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cbd4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31CBD4u;
    SET_GPR_U32(ctx, 31, 0x31CBDCu);
    ctx->pc = 0x31CBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CBD4u;
    // 0x31cbd8: 0x24a54098  addiu       $a1, $a1, 0x4098 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31CBD4u, 0x31CBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CBDCu;
label_31cbdc:
    // 0x31cbdc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31cbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31cbe0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31CBE0u;
    {
        const bool branch_taken_0x31cbe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CBE0u;
        // 0x31cbe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cbe0) {
            ctx->pc = 0x31CC0Cu;
            goto label_31cc0c;
        }
    }
    ctx->pc = 0x31CBE8u;
    // 0x31cbe8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x31cbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31cbec: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x31cbecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x31cbf0: 0xc09df62  jal         func_277D88
    ctx->pc = 0x31CBF0u;
    SET_GPR_U32(ctx, 31, 0x31CBF8u);
    ctx->pc = 0x31CBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CBF0u;
    // 0x31cbf4: 0x27a70018  addiu       $a3, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x31CBF0u, 0x31CBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CBF8u;
label_31cbf8:
    // 0x31cbf8: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x31cbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31cbfc: 0x26245870  addiu       $a0, $s1, 0x5870
    ctx->pc = 0x31cbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 22640));
    // 0x31cc00: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x31cc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x31cc04: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x31CC04u;
    {
        const bool branch_taken_0x31cc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CC04u;
        // 0x31cc08: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cc04) {
            ctx->pc = 0x31CD08u;
            goto label_31cd08;
        }
    }
    ctx->pc = 0x31CC0Cu;
label_31cc0c:
    // 0x31cc0c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31cc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31cc10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31cc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cc14: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31CC14u;
    SET_GPR_U32(ctx, 31, 0x31CC1Cu);
    ctx->pc = 0x31CC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CC14u;
    // 0x31cc18: 0x24a540b0  addiu       $a1, $a1, 0x40B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31CC14u, 0x31CC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CC1Cu;
label_31cc1c:
    // 0x31cc1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31cc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31cc20: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31CC20u;
    {
        const bool branch_taken_0x31cc20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CC20u;
        // 0x31cc24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cc20) {
            ctx->pc = 0x31CC4Cu;
            goto label_31cc4c;
        }
    }
    ctx->pc = 0x31CC28u;
    // 0x31cc28: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x31cc28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31cc2c: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x31cc2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x31cc30: 0xc09df62  jal         func_277D88
    ctx->pc = 0x31CC30u;
    SET_GPR_U32(ctx, 31, 0x31CC38u);
    ctx->pc = 0x31CC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CC30u;
    // 0x31cc34: 0x27a70018  addiu       $a3, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x31CC30u, 0x31CC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CC38u;
label_31cc38:
    // 0x31cc38: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x31cc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31cc3c: 0x26245870  addiu       $a0, $s1, 0x5870
    ctx->pc = 0x31cc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 22640));
    // 0x31cc40: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x31cc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x31cc44: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x31CC44u;
    {
        const bool branch_taken_0x31cc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CC44u;
        // 0x31cc48: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cc44) {
            ctx->pc = 0x31CD74u;
            goto label_31cd74;
        }
    }
    ctx->pc = 0x31CC4Cu;
label_31cc4c:
    // 0x31cc4c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31cc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31cc50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31cc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cc54: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31CC54u;
    SET_GPR_U32(ctx, 31, 0x31CC5Cu);
    ctx->pc = 0x31CC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CC54u;
    // 0x31cc58: 0x24a540c8  addiu       $a1, $a1, 0x40C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31CC54u, 0x31CC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CC5Cu;
label_31cc5c:
    // 0x31cc5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31cc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31cc60: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31CC60u;
    {
        const bool branch_taken_0x31cc60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CC60u;
        // 0x31cc64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cc60) {
            ctx->pc = 0x31CC8Cu;
            goto label_31cc8c;
        }
    }
    ctx->pc = 0x31CC68u;
    // 0x31cc68: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x31cc68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31cc6c: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x31cc6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x31cc70: 0xc09df62  jal         func_277D88
    ctx->pc = 0x31CC70u;
    SET_GPR_U32(ctx, 31, 0x31CC78u);
    ctx->pc = 0x31CC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CC70u;
    // 0x31cc74: 0x27a70018  addiu       $a3, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x31CC70u, 0x31CC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CC78u;
label_31cc78:
    // 0x31cc78: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x31cc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31cc7c: 0x26245870  addiu       $a0, $s1, 0x5870
    ctx->pc = 0x31cc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 22640));
    // 0x31cc80: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x31cc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x31cc84: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x31CC84u;
    {
        const bool branch_taken_0x31cc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CC84u;
        // 0x31cc88: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cc84) {
            ctx->pc = 0x31CD08u;
            goto label_31cd08;
        }
    }
    ctx->pc = 0x31CC8Cu;
label_31cc8c:
    // 0x31cc8c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31cc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31cc90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31cc90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cc94: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31CC94u;
    SET_GPR_U32(ctx, 31, 0x31CC9Cu);
    ctx->pc = 0x31CC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CC94u;
    // 0x31cc98: 0x24a540e0  addiu       $a1, $a1, 0x40E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31CC94u, 0x31CC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CC9Cu;
label_31cc9c:
    // 0x31cc9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31cc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31cca0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31CCA0u;
    {
        const bool branch_taken_0x31cca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CCA0u;
        // 0x31cca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cca0) {
            ctx->pc = 0x31CCCCu;
            goto label_31cccc;
        }
    }
    ctx->pc = 0x31CCA8u;
    // 0x31cca8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x31cca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31ccac: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x31ccacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x31ccb0: 0xc09df62  jal         func_277D88
    ctx->pc = 0x31CCB0u;
    SET_GPR_U32(ctx, 31, 0x31CCB8u);
    ctx->pc = 0x31CCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CCB0u;
    // 0x31ccb4: 0x27a70018  addiu       $a3, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x31CCB0u, 0x31CCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CCB8u;
label_31ccb8:
    // 0x31ccb8: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x31ccb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31ccbc: 0x26245870  addiu       $a0, $s1, 0x5870
    ctx->pc = 0x31ccbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 22640));
    // 0x31ccc0: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x31ccc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x31ccc4: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x31CCC4u;
    {
        const bool branch_taken_0x31ccc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CCC4u;
        // 0x31ccc8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ccc4) {
            ctx->pc = 0x31CD74u;
            goto label_31cd74;
        }
    }
    ctx->pc = 0x31CCCCu;
label_31cccc:
    // 0x31cccc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31ccccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31ccd0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31ccd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ccd4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31CCD4u;
    SET_GPR_U32(ctx, 31, 0x31CCDCu);
    ctx->pc = 0x31CCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CCD4u;
    // 0x31ccd8: 0x24a540f8  addiu       $a1, $a1, 0x40F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31CCD4u, 0x31CCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CCDCu;
label_31ccdc:
    // 0x31ccdc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31ccdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31cce0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x31CCE0u;
    {
        const bool branch_taken_0x31cce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CCE0u;
        // 0x31cce4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cce0) {
            ctx->pc = 0x31CD1Cu;
            goto label_31cd1c;
        }
    }
    ctx->pc = 0x31CCE8u;
    // 0x31cce8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x31cce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31ccec: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x31ccecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x31ccf0: 0xc09df62  jal         func_277D88
    ctx->pc = 0x31CCF0u;
    SET_GPR_U32(ctx, 31, 0x31CCF8u);
    ctx->pc = 0x31CCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CCF0u;
    // 0x31ccf4: 0x27a70018  addiu       $a3, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x31CCF0u, 0x31CCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CCF8u;
label_31ccf8:
    // 0x31ccf8: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x31ccf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31ccfc: 0x26245870  addiu       $a0, $s1, 0x5870
    ctx->pc = 0x31ccfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 22640));
    // 0x31cd00: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x31cd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x31cd04: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x31cd04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_31cd08:
    // 0x31cd08: 0xc7ae0018  lwc1        $f14, 0x18($sp)
    ctx->pc = 0x31cd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x31cd0c: 0xc0b8f54  jal         func_2E3D50
    ctx->pc = 0x31CD0Cu;
    SET_GPR_U32(ctx, 31, 0x31CD14u);
    ctx->pc = 0x31CD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CD0Cu;
    // 0x31cd10: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3D50u, 0x31CD0Cu, 0x31CD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CD14u;
label_31cd14:
    // 0x31cd14: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x31CD14u;
    {
        const bool branch_taken_0x31cd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CD14u;
        // 0x31cd18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cd14) {
            ctx->pc = 0x31CDF0u;
            goto label_31cdf0;
        }
    }
    ctx->pc = 0x31CD1Cu;
label_31cd1c:
    // 0x31cd1c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31cd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31cd20: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31cd20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cd24: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31CD24u;
    SET_GPR_U32(ctx, 31, 0x31CD2Cu);
    ctx->pc = 0x31CD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CD24u;
    // 0x31cd28: 0x24a54118  addiu       $a1, $a1, 0x4118 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31CD24u, 0x31CD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CD2Cu;
label_31cd2c:
    // 0x31cd2c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31cd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31cd30: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x31CD30u;
    {
        const bool branch_taken_0x31cd30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CD30u;
        // 0x31cd34: 0x27a60014  addiu       $a2, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cd30) {
            ctx->pc = 0x31CD88u;
            goto label_31cd88;
        }
    }
    ctx->pc = 0x31CD38u;
    // 0x31cd38: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x31cd38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31cd3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31cd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cd40: 0xc09df62  jal         func_277D88
    ctx->pc = 0x31CD40u;
    SET_GPR_U32(ctx, 31, 0x31CD48u);
    ctx->pc = 0x31CD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CD40u;
    // 0x31cd44: 0x27a70018  addiu       $a3, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x31CD40u, 0x31CD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CD48u;
label_31cd48:
    // 0x31cd48: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x31cd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31cd4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31cd4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cd50: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x31cd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x31cd54: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x31cd54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x31cd58: 0xc7ae0018  lwc1        $f14, 0x18($sp)
    ctx->pc = 0x31cd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x31cd5c: 0xc0b8f54  jal         func_2E3D50
    ctx->pc = 0x31CD5Cu;
    SET_GPR_U32(ctx, 31, 0x31CD64u);
    ctx->pc = 0x31CD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CD5Cu;
    // 0x31cd60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3D50u, 0x31CD5Cu, 0x31CD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CD64u;
label_31cd64:
    // 0x31cd64: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x31cd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31cd68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31cd68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cd6c: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x31cd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x31cd70: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x31cd70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_31cd74:
    // 0x31cd74: 0xc7ae0018  lwc1        $f14, 0x18($sp)
    ctx->pc = 0x31cd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x31cd78: 0xc0b8f54  jal         func_2E3D50
    ctx->pc = 0x31CD78u;
    SET_GPR_U32(ctx, 31, 0x31CD80u);
    ctx->pc = 0x31CD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CD78u;
    // 0x31cd7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3D50u, 0x31CD78u, 0x31CD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CD80u;
label_31cd80:
    // 0x31cd80: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x31CD80u;
    {
        const bool branch_taken_0x31cd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CD80u;
        // 0x31cd84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cd80) {
            ctx->pc = 0x31CDF0u;
            goto label_31cdf0;
        }
    }
    ctx->pc = 0x31CD88u;
label_31cd88:
    // 0x31cd88: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31cd88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31cd8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31cd8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cd90: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31CD90u;
    SET_GPR_U32(ctx, 31, 0x31CD98u);
    ctx->pc = 0x31CD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CD90u;
    // 0x31cd94: 0x24a54138  addiu       $a1, $a1, 0x4138 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31CD90u, 0x31CD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CD98u;
label_31cd98:
    // 0x31cd98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31cd98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31cd9c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x31CD9Cu;
    {
        const bool branch_taken_0x31cd9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CD9Cu;
        // 0x31cda0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cd9c) {
            ctx->pc = 0x31CDECu;
            goto label_31cdec;
        }
    }
    ctx->pc = 0x31CDA4u;
    // 0x31cda4: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x31cda4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x31cda8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31cda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cdac: 0xc09df62  jal         func_277D88
    ctx->pc = 0x31CDACu;
    SET_GPR_U32(ctx, 31, 0x31CDB4u);
    ctx->pc = 0x31CDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CDACu;
    // 0x31cdb0: 0x27a70018  addiu       $a3, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x31CDACu, 0x31CDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CDB4u;
label_31cdb4:
    // 0x31cdb4: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x31cdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31cdb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31cdb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cdbc: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x31cdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x31cdc0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x31cdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x31cdc4: 0xc7ae0018  lwc1        $f14, 0x18($sp)
    ctx->pc = 0x31cdc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x31cdc8: 0xc0b8f54  jal         func_2E3D50
    ctx->pc = 0x31CDC8u;
    SET_GPR_U32(ctx, 31, 0x31CDD0u);
    ctx->pc = 0x31CDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CDC8u;
    // 0x31cdcc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3D50u, 0x31CDC8u, 0x31CDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CDD0u;
label_31cdd0:
    // 0x31cdd0: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x31cdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31cdd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31cdd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cdd8: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x31cdd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x31cddc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x31cddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x31cde0: 0xc7ae0018  lwc1        $f14, 0x18($sp)
    ctx->pc = 0x31cde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x31cde4: 0xc0b8f54  jal         func_2E3D50
    ctx->pc = 0x31CDE4u;
    SET_GPR_U32(ctx, 31, 0x31CDECu);
    ctx->pc = 0x31CDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CDE4u;
    // 0x31cde8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3D50u, 0x31CDE4u, 0x31CDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CDECu;
label_31cdec:
    // 0x31cdec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31cdecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31cdf0:
    // 0x31cdf0: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x31CDF0u;
    SET_GPR_U32(ctx, 31, 0x31CDF8u);
    ctx->pc = 0x31CDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CDF0u;
    // 0x31cdf4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x31CDF0u, 0x31CDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CDF8u;
label_31cdf8:
    // 0x31cdf8: 0x1440fe77  bnez        $v0, . + 4 + (-0x189 << 2)
    ctx->pc = 0x31CDF8u;
    {
        const bool branch_taken_0x31cdf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31CDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CDF8u;
        // 0x31cdfc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cdf8) {
            ctx->pc = 0x31C7D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c7d8;
        }
    }
    ctx->pc = 0x31CE00u;
    // 0x31ce00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31ce00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ce04: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x31CE04u;
    SET_GPR_U32(ctx, 31, 0x31CE0Cu);
    ctx->pc = 0x31CE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CE04u;
    // 0x31ce08: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x31CE04u, 0x31CE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CE0Cu;
label_31ce0c:
    // 0x31ce0c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x31ce0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31ce10: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x31ce10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ce14: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x31ce14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31ce18: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x31ce18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31ce1c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x31ce1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31ce20: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x31ce20u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31ce24: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x31ce24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31ce28: 0x3e00008  jr          $ra
    ctx->pc = 0x31CE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31CE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CE28u;
        // 0x31ce2c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CE28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31CE30u;
}
