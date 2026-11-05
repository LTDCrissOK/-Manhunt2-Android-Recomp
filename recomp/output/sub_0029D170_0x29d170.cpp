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

// Function: sub_0029D170
// Address: 0x29d170 - 0x29d530
void sub_0029D170_0x29d170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D170_0x29d170");
#endif

    switch (ctx->pc) {
        case 0x29d19cu: goto label_29d19c;
        case 0x29d1b0u: goto label_29d1b0;
        case 0x29d1b8u: goto label_29d1b8;
        case 0x29d1ccu: goto label_29d1cc;
        case 0x29d1e0u: goto label_29d1e0;
        case 0x29d1e8u: goto label_29d1e8;
        case 0x29d1fcu: goto label_29d1fc;
        case 0x29d210u: goto label_29d210;
        case 0x29d218u: goto label_29d218;
        case 0x29d22cu: goto label_29d22c;
        case 0x29d240u: goto label_29d240;
        case 0x29d250u: goto label_29d250;
        case 0x29d26cu: goto label_29d26c;
        case 0x29d280u: goto label_29d280;
        case 0x29d288u: goto label_29d288;
        case 0x29d29cu: goto label_29d29c;
        case 0x29d2b0u: goto label_29d2b0;
        case 0x29d2b8u: goto label_29d2b8;
        case 0x29d2ccu: goto label_29d2cc;
        case 0x29d2e0u: goto label_29d2e0;
        case 0x29d2e8u: goto label_29d2e8;
        case 0x29d2fcu: goto label_29d2fc;
        case 0x29d310u: goto label_29d310;
        case 0x29d31cu: goto label_29d31c;
        case 0x29d330u: goto label_29d330;
        case 0x29d344u: goto label_29d344;
        case 0x29d350u: goto label_29d350;
        case 0x29d364u: goto label_29d364;
        case 0x29d378u: goto label_29d378;
        case 0x29d388u: goto label_29d388;
        case 0x29d3a4u: goto label_29d3a4;
        case 0x29d3b8u: goto label_29d3b8;
        case 0x29d3c8u: goto label_29d3c8;
        case 0x29d3e4u: goto label_29d3e4;
        case 0x29d3f8u: goto label_29d3f8;
        case 0x29d408u: goto label_29d408;
        case 0x29d424u: goto label_29d424;
        case 0x29d438u: goto label_29d438;
        case 0x29d448u: goto label_29d448;
        case 0x29d468u: goto label_29d468;
        case 0x29d47cu: goto label_29d47c;
        case 0x29d48cu: goto label_29d48c;
        case 0x29d4b0u: goto label_29d4b0;
        case 0x29d4c4u: goto label_29d4c4;
        case 0x29d4ccu: goto label_29d4cc;
        case 0x29d4e0u: goto label_29d4e0;
        case 0x29d4f4u: goto label_29d4f4;
        case 0x29d4fcu: goto label_29d4fc;
        default: break;
    }

    ctx->pc = 0x29d170u;

    // 0x29d170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29d170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29d174: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29d174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29d178: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29d178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d17c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29d17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29d180: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29d180u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29d184: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29d184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29d188: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x29d188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x29d18c: 0x24a5c1d8  addiu       $a1, $a1, -0x3E28
    ctx->pc = 0x29d18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951384));
    // 0x29d190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d194: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29D194u;
    SET_GPR_U32(ctx, 31, 0x29D19Cu);
    ctx->pc = 0x29D198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D194u;
    // 0x29d198: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29D194u, 0x29D19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D19Cu;
label_29d19c:
    // 0x29d19c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29d19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29d1a0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x29D1A0u;
    {
        const bool branch_taken_0x29d1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d1a0) {
            ctx->pc = 0x29D1A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D1A0u;
            // 0x29d1a4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D1C0u;
            goto label_29d1c0;
        }
    }
    ctx->pc = 0x29D1A8u;
    // 0x29d1a8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x29D1A8u;
    SET_GPR_U32(ctx, 31, 0x29D1B0u);
    ctx->pc = 0x29D1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D1A8u;
    // 0x29d1ac: 0x2404027c  addiu       $a0, $zero, 0x27C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 636));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x29D1A8u, 0x29D1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D1B0u;
label_29d1b0:
    // 0x29d1b0: 0xc0a75d4  jal         func_29D750
    ctx->pc = 0x29D1B0u;
    SET_GPR_U32(ctx, 31, 0x29D1B8u);
    ctx->pc = 0x29D1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D1B0u;
    // 0x29d1b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D750u, 0x29D1B0u, 0x29D1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D1B8u;
label_29d1b8:
    // 0x29d1b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x29d1b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d1bc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29d1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_29d1c0:
    // 0x29d1c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d1c4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29D1C4u;
    SET_GPR_U32(ctx, 31, 0x29D1CCu);
    ctx->pc = 0x29D1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D1C4u;
    // 0x29d1c8: 0x24a5c228  addiu       $a1, $a1, -0x3DD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29D1C4u, 0x29D1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D1CCu;
label_29d1cc:
    // 0x29d1cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29d1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29d1d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29D1D0u;
    {
        const bool branch_taken_0x29d1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D1D0u;
        // 0x29d1d4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d1d0) {
            ctx->pc = 0x29D1F0u;
            goto label_29d1f0;
        }
    }
    ctx->pc = 0x29D1D8u;
    // 0x29d1d8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x29D1D8u;
    SET_GPR_U32(ctx, 31, 0x29D1E0u);
    ctx->pc = 0x29D1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D1D8u;
    // 0x29d1dc: 0x240402e0  addiu       $a0, $zero, 0x2E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x29D1D8u, 0x29D1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D1E0u;
label_29d1e0:
    // 0x29d1e0: 0xc0a96c0  jal         func_2A5B00
    ctx->pc = 0x29D1E0u;
    SET_GPR_U32(ctx, 31, 0x29D1E8u);
    ctx->pc = 0x29D1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D1E0u;
    // 0x29d1e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5B00u, 0x29D1E0u, 0x29D1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D1E8u;
label_29d1e8:
    // 0x29d1e8: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x29D1E8u;
    {
        const bool branch_taken_0x29d1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D1E8u;
        // 0x29d1ec: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d1e8) {
            ctx->pc = 0x29D500u;
            goto label_29d500;
        }
    }
    ctx->pc = 0x29D1F0u;
label_29d1f0:
    // 0x29d1f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d1f4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29D1F4u;
    SET_GPR_U32(ctx, 31, 0x29D1FCu);
    ctx->pc = 0x29D1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D1F4u;
    // 0x29d1f8: 0x24a5c238  addiu       $a1, $a1, -0x3DC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29D1F4u, 0x29D1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D1FCu;
label_29d1fc:
    // 0x29d1fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29d1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29d200: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29D200u;
    {
        const bool branch_taken_0x29d200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D200u;
        // 0x29d204: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d200) {
            ctx->pc = 0x29D220u;
            goto label_29d220;
        }
    }
    ctx->pc = 0x29D208u;
    // 0x29d208: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x29D208u;
    SET_GPR_U32(ctx, 31, 0x29D210u);
    ctx->pc = 0x29D20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D208u;
    // 0x29d20c: 0x24040280  addiu       $a0, $zero, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x29D208u, 0x29D210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D210u;
label_29d210:
    // 0x29d210: 0xc0a52e0  jal         func_294B80
    ctx->pc = 0x29D210u;
    SET_GPR_U32(ctx, 31, 0x29D218u);
    ctx->pc = 0x29D214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D210u;
    // 0x29d214: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294B80u, 0x29D210u, 0x29D218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D218u;
label_29d218:
    // 0x29d218: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x29D218u;
    {
        const bool branch_taken_0x29d218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D218u;
        // 0x29d21c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d218) {
            ctx->pc = 0x29D500u;
            goto label_29d500;
        }
    }
    ctx->pc = 0x29D220u;
label_29d220:
    // 0x29d220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d224: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29D224u;
    SET_GPR_U32(ctx, 31, 0x29D22Cu);
    ctx->pc = 0x29D228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D224u;
    // 0x29d228: 0x24a5c248  addiu       $a1, $a1, -0x3DB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29D224u, 0x29D22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D22Cu;
label_29d22c:
    // 0x29d22c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29d22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29d230: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x29D230u;
    {
        const bool branch_taken_0x29d230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D230u;
        // 0x29d234: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d230) {
            ctx->pc = 0x29D260u;
            goto label_29d260;
        }
    }
    ctx->pc = 0x29D238u;
    // 0x29d238: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x29D238u;
    SET_GPR_U32(ctx, 31, 0x29D240u);
    ctx->pc = 0x29D23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D238u;
    // 0x29d23c: 0x2404027c  addiu       $a0, $zero, 0x27C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 636));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x29D238u, 0x29D240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D240u;
label_29d240:
    // 0x29d240: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29d240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d248: 0xc0a75d4  jal         func_29D750
    ctx->pc = 0x29D248u;
    SET_GPR_U32(ctx, 31, 0x29D250u);
    ctx->pc = 0x29D24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D248u;
    // 0x29d24c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D750u, 0x29D248u, 0x29D250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D250u;
label_29d250:
    // 0x29d250: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x29d250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x29d254: 0x24633388  addiu       $v1, $v1, 0x3388
    ctx->pc = 0x29d254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13192));
    // 0x29d258: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x29D258u;
    {
        const bool branch_taken_0x29d258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D258u;
        // 0x29d25c: 0xae030278  sw          $v1, 0x278($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d258) {
            ctx->pc = 0x29D500u;
            goto label_29d500;
        }
    }
    ctx->pc = 0x29D260u;
label_29d260:
    // 0x29d260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d264: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29D264u;
    SET_GPR_U32(ctx, 31, 0x29D26Cu);
    ctx->pc = 0x29D268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D264u;
    // 0x29d268: 0x24a5c260  addiu       $a1, $a1, -0x3DA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29D264u, 0x29D26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D26Cu;
label_29d26c:
    // 0x29d26c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29d26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29d270: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29D270u;
    {
        const bool branch_taken_0x29d270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D270u;
        // 0x29d274: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d270) {
            ctx->pc = 0x29D290u;
            goto label_29d290;
        }
    }
    ctx->pc = 0x29D278u;
    // 0x29d278: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x29D278u;
    SET_GPR_U32(ctx, 31, 0x29D280u);
    ctx->pc = 0x29D27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D278u;
    // 0x29d27c: 0x24040fa0  addiu       $a0, $zero, 0xFA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x29D278u, 0x29D280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D280u;
label_29d280:
    // 0x29d280: 0xc0a846c  jal         func_2A11B0
    ctx->pc = 0x29D280u;
    SET_GPR_U32(ctx, 31, 0x29D288u);
    ctx->pc = 0x29D284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D280u;
    // 0x29d284: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A11B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A11B0u, 0x29D280u, 0x29D288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D288u;
label_29d288:
    // 0x29d288: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x29D288u;
    {
        const bool branch_taken_0x29d288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D288u;
        // 0x29d28c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d288) {
            ctx->pc = 0x29D500u;
            goto label_29d500;
        }
    }
    ctx->pc = 0x29D290u;
label_29d290:
    // 0x29d290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d294: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29D294u;
    SET_GPR_U32(ctx, 31, 0x29D29Cu);
    ctx->pc = 0x29D298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D294u;
    // 0x29d298: 0x24a5c278  addiu       $a1, $a1, -0x3D88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29D294u, 0x29D29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D29Cu;
label_29d29c:
    // 0x29d29c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29d29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29d2a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29D2A0u;
    {
        const bool branch_taken_0x29d2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D2A0u;
        // 0x29d2a4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d2a0) {
            ctx->pc = 0x29D2C0u;
            goto label_29d2c0;
        }
    }
    ctx->pc = 0x29D2A8u;
    // 0x29d2a8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x29D2A8u;
    SET_GPR_U32(ctx, 31, 0x29D2B0u);
    ctx->pc = 0x29D2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D2A8u;
    // 0x29d2ac: 0x2404027c  addiu       $a0, $zero, 0x27C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 636));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x29D2A8u, 0x29D2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D2B0u;
label_29d2b0:
    // 0x29d2b0: 0xc0a3e94  jal         func_28FA50
    ctx->pc = 0x29D2B0u;
    SET_GPR_U32(ctx, 31, 0x29D2B8u);
    ctx->pc = 0x29D2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D2B0u;
    // 0x29d2b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FA50u, 0x29D2B0u, 0x29D2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D2B8u;
label_29d2b8:
    // 0x29d2b8: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x29D2B8u;
    {
        const bool branch_taken_0x29d2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D2B8u;
        // 0x29d2bc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d2b8) {
            ctx->pc = 0x29D500u;
            goto label_29d500;
        }
    }
    ctx->pc = 0x29D2C0u;
label_29d2c0:
    // 0x29d2c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d2c4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29D2C4u;
    SET_GPR_U32(ctx, 31, 0x29D2CCu);
    ctx->pc = 0x29D2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D2C4u;
    // 0x29d2c8: 0x24a5c290  addiu       $a1, $a1, -0x3D70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29D2C4u, 0x29D2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D2CCu;
label_29d2cc:
    // 0x29d2cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29d2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29d2d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29D2D0u;
    {
        const bool branch_taken_0x29d2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D2D0u;
        // 0x29d2d4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d2d0) {
            ctx->pc = 0x29D2F0u;
            goto label_29d2f0;
        }
    }
    ctx->pc = 0x29D2D8u;
    // 0x29d2d8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x29D2D8u;
    SET_GPR_U32(ctx, 31, 0x29D2E0u);
    ctx->pc = 0x29D2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D2D8u;
    // 0x29d2dc: 0x24040280  addiu       $a0, $zero, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x29D2D8u, 0x29D2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D2E0u;
label_29d2e0:
    // 0x29d2e0: 0xc0a81ea  jal         func_2A07A8
    ctx->pc = 0x29D2E0u;
    SET_GPR_U32(ctx, 31, 0x29D2E8u);
    ctx->pc = 0x29D2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D2E0u;
    // 0x29d2e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A07A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A07A8u, 0x29D2E0u, 0x29D2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D2E8u;
label_29d2e8:
    // 0x29d2e8: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x29D2E8u;
    {
        const bool branch_taken_0x29d2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D2E8u;
        // 0x29d2ec: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d2e8) {
            ctx->pc = 0x29D500u;
            goto label_29d500;
        }
    }
    ctx->pc = 0x29D2F0u;
label_29d2f0:
    // 0x29d2f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d2f4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29D2F4u;
    SET_GPR_U32(ctx, 31, 0x29D2FCu);
    ctx->pc = 0x29D2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D2F4u;
    // 0x29d2f8: 0x24a5c2a0  addiu       $a1, $a1, -0x3D60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29D2F4u, 0x29D2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D2FCu;
label_29d2fc:
    // 0x29d2fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29d2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29d300: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29D300u;
    {
        const bool branch_taken_0x29d300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D300u;
        // 0x29d304: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d300) {
            ctx->pc = 0x29D324u;
            goto label_29d324;
        }
    }
    ctx->pc = 0x29D308u;
    // 0x29d308: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x29D308u;
    SET_GPR_U32(ctx, 31, 0x29D310u);
    ctx->pc = 0x29D30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D308u;
    // 0x29d30c: 0x24040310  addiu       $a0, $zero, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x29D308u, 0x29D310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D310u;
label_29d310:
    // 0x29d310: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29d310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d314: 0xc0a4070  jal         func_2901C0
    ctx->pc = 0x29D314u;
    SET_GPR_U32(ctx, 31, 0x29D31Cu);
    ctx->pc = 0x29D318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D314u;
    // 0x29d318: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2901C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2901C0u, 0x29D314u, 0x29D31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D31Cu;
label_29d31c:
    // 0x29d31c: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x29D31Cu;
    {
        const bool branch_taken_0x29d31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D31Cu;
        // 0x29d320: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d31c) {
            ctx->pc = 0x29D500u;
            goto label_29d500;
        }
    }
    ctx->pc = 0x29D324u;
label_29d324:
    // 0x29d324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d328: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29D328u;
    SET_GPR_U32(ctx, 31, 0x29D330u);
    ctx->pc = 0x29D32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D328u;
    // 0x29d32c: 0x24a5c2b0  addiu       $a1, $a1, -0x3D50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29D328u, 0x29D330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D330u;
label_29d330:
    // 0x29d330: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29d330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29d334: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29D334u;
    {
        const bool branch_taken_0x29d334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D334u;
        // 0x29d338: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d334) {
            ctx->pc = 0x29D358u;
            goto label_29d358;
        }
    }
    ctx->pc = 0x29D33Cu;
    // 0x29d33c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x29D33Cu;
    SET_GPR_U32(ctx, 31, 0x29D344u);
    ctx->pc = 0x29D340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D33Cu;
    // 0x29d340: 0x24040310  addiu       $a0, $zero, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x29D33Cu, 0x29D344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D344u;
label_29d344:
    // 0x29d344: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29d344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d348: 0xc0a4070  jal         func_2901C0
    ctx->pc = 0x29D348u;
    SET_GPR_U32(ctx, 31, 0x29D350u);
    ctx->pc = 0x29D34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D348u;
    // 0x29d34c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2901C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2901C0u, 0x29D348u, 0x29D350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D350u;
label_29d350:
    // 0x29d350: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x29D350u;
    {
        const bool branch_taken_0x29d350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D350u;
        // 0x29d354: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d350) {
            ctx->pc = 0x29D500u;
            goto label_29d500;
        }
    }
    ctx->pc = 0x29D358u;
label_29d358:
    // 0x29d358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d35c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29D35Cu;
    SET_GPR_U32(ctx, 31, 0x29D364u);
    ctx->pc = 0x29D360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D35Cu;
    // 0x29d360: 0x24a5c2c8  addiu       $a1, $a1, -0x3D38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29D35Cu, 0x29D364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D364u;
label_29d364:
    // 0x29d364: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29d364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29d368: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x29D368u;
    {
        const bool branch_taken_0x29d368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D368u;
        // 0x29d36c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d368) {
            ctx->pc = 0x29D398u;
            goto label_29d398;
        }
    }
    ctx->pc = 0x29D370u;
    // 0x29d370: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x29D370u;
    SET_GPR_U32(ctx, 31, 0x29D378u);
    ctx->pc = 0x29D374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D370u;
    // 0x29d374: 0x2404027c  addiu       $a0, $zero, 0x27C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 636));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x29D370u, 0x29D378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D378u;
label_29d378:
    // 0x29d378: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29d378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d37c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d380: 0xc0a75d4  jal         func_29D750
    ctx->pc = 0x29D380u;
    SET_GPR_U32(ctx, 31, 0x29D388u);
    ctx->pc = 0x29D384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D380u;
    // 0x29d384: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D750u, 0x29D380u, 0x29D388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D388u;
label_29d388:
    // 0x29d388: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x29d388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x29d38c: 0x24633438  addiu       $v1, $v1, 0x3438
    ctx->pc = 0x29d38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13368));
    // 0x29d390: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x29D390u;
    {
        const bool branch_taken_0x29d390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D390u;
        // 0x29d394: 0xae030278  sw          $v1, 0x278($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d390) {
            ctx->pc = 0x29D500u;
            goto label_29d500;
        }
    }
    ctx->pc = 0x29D398u;
label_29d398:
    // 0x29d398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d39c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29D39Cu;
    SET_GPR_U32(ctx, 31, 0x29D3A4u);
    ctx->pc = 0x29D3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D39Cu;
    // 0x29d3a0: 0x24a5c2e8  addiu       $a1, $a1, -0x3D18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29D39Cu, 0x29D3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D3A4u;
label_29d3a4:
    // 0x29d3a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29d3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29d3a8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x29D3A8u;
    {
        const bool branch_taken_0x29d3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3A8u;
        // 0x29d3ac: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d3a8) {
            ctx->pc = 0x29D3D8u;
            goto label_29d3d8;
        }
    }
    ctx->pc = 0x29D3B0u;
    // 0x29d3b0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x29D3B0u;
    SET_GPR_U32(ctx, 31, 0x29D3B8u);
    ctx->pc = 0x29D3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D3B0u;
    // 0x29d3b4: 0x2404027c  addiu       $a0, $zero, 0x27C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 636));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x29D3B0u, 0x29D3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D3B8u;
label_29d3b8:
    // 0x29d3b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29d3b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d3bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d3c0: 0xc0a75d4  jal         func_29D750
    ctx->pc = 0x29D3C0u;
    SET_GPR_U32(ctx, 31, 0x29D3C8u);
    ctx->pc = 0x29D3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D3C0u;
    // 0x29d3c4: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D750u, 0x29D3C0u, 0x29D3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D3C8u;
label_29d3c8:
    // 0x29d3c8: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x29d3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x29d3cc: 0x246335e8  addiu       $v1, $v1, 0x35E8
    ctx->pc = 0x29d3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13800));
    // 0x29d3d0: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x29D3D0u;
    {
        const bool branch_taken_0x29d3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3D0u;
        // 0x29d3d4: 0xae030278  sw          $v1, 0x278($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d3d0) {
            ctx->pc = 0x29D500u;
            goto label_29d500;
        }
    }
    ctx->pc = 0x29D3D8u;
label_29d3d8:
    // 0x29d3d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d3dc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29D3DCu;
    SET_GPR_U32(ctx, 31, 0x29D3E4u);
    ctx->pc = 0x29D3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D3DCu;
    // 0x29d3e0: 0x24a5c308  addiu       $a1, $a1, -0x3CF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29D3DCu, 0x29D3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D3E4u;
label_29d3e4:
    // 0x29d3e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29d3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29d3e8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x29D3E8u;
    {
        const bool branch_taken_0x29d3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3E8u;
        // 0x29d3ec: 0x240402e4  addiu       $a0, $zero, 0x2E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 740));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d3e8) {
            ctx->pc = 0x29D414u;
            goto label_29d414;
        }
    }
    ctx->pc = 0x29D3F0u;
    // 0x29d3f0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x29D3F0u;
    SET_GPR_U32(ctx, 31, 0x29D3F8u);
    ctx->pc = 0x29D3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D3F0u;
    // 0x29d3f4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x29D3F0u, 0x29D3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D3F8u;
label_29d3f8:
    // 0x29d3f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29d3f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d3fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d400: 0xc0a96c0  jal         func_2A5B00
    ctx->pc = 0x29D400u;
    SET_GPR_U32(ctx, 31, 0x29D408u);
    ctx->pc = 0x29D404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D400u;
    // 0x29d404: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5B00u, 0x29D400u, 0x29D408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D408u;
label_29d408:
    // 0x29d408: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x29d408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x29d40c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x29D40Cu;
    {
        const bool branch_taken_0x29d40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D40Cu;
        // 0x29d410: 0xae1102e0  sw          $s1, 0x2E0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d40c) {
            ctx->pc = 0x29D450u;
            goto label_29d450;
        }
    }
    ctx->pc = 0x29D414u;
label_29d414:
    // 0x29d414: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29d414u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29d418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d41c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29D41Cu;
    SET_GPR_U32(ctx, 31, 0x29D424u);
    ctx->pc = 0x29D420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D41Cu;
    // 0x29d420: 0x24a5c320  addiu       $a1, $a1, -0x3CE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29D41Cu, 0x29D424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D424u;
label_29d424:
    // 0x29d424: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29d424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29d428: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x29D428u;
    {
        const bool branch_taken_0x29d428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D428u;
        // 0x29d42c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d428) {
            ctx->pc = 0x29D45Cu;
            goto label_29d45c;
        }
    }
    ctx->pc = 0x29D430u;
    // 0x29d430: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x29D430u;
    SET_GPR_U32(ctx, 31, 0x29D438u);
    ctx->pc = 0x29D434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D430u;
    // 0x29d434: 0x240402e4  addiu       $a0, $zero, 0x2E4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 740));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x29D430u, 0x29D438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D438u;
label_29d438:
    // 0x29d438: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29d438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d43c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d440: 0xc0a96c0  jal         func_2A5B00
    ctx->pc = 0x29D440u;
    SET_GPR_U32(ctx, 31, 0x29D448u);
    ctx->pc = 0x29D444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D440u;
    // 0x29d444: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5B00u, 0x29D440u, 0x29D448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D448u;
label_29d448:
    // 0x29d448: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x29d448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x29d44c: 0xae0002e0  sw          $zero, 0x2E0($s0)
    ctx->pc = 0x29d44cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 0));
label_29d450:
    // 0x29d450: 0x24632e18  addiu       $v1, $v1, 0x2E18
    ctx->pc = 0x29d450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11800));
    // 0x29d454: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x29D454u;
    {
        const bool branch_taken_0x29d454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D454u;
        // 0x29d458: 0xae030278  sw          $v1, 0x278($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d454) {
            ctx->pc = 0x29D500u;
            goto label_29d500;
        }
    }
    ctx->pc = 0x29D45Cu;
label_29d45c:
    // 0x29d45c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d460: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29D460u;
    SET_GPR_U32(ctx, 31, 0x29D468u);
    ctx->pc = 0x29D464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D460u;
    // 0x29d464: 0x24a5c340  addiu       $a1, $a1, -0x3CC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29D460u, 0x29D468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D468u;
label_29d468:
    // 0x29d468: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29d468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29d46c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x29D46Cu;
    {
        const bool branch_taken_0x29d46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D46Cu;
        // 0x29d470: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d46c) {
            ctx->pc = 0x29D4A4u;
            goto label_29d4a4;
        }
    }
    ctx->pc = 0x29D474u;
    // 0x29d474: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x29D474u;
    SET_GPR_U32(ctx, 31, 0x29D47Cu);
    ctx->pc = 0x29D478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D474u;
    // 0x29d478: 0x2404027c  addiu       $a0, $zero, 0x27C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 636));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x29D474u, 0x29D47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D47Cu;
label_29d47c:
    // 0x29d47c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29d47cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d480: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d484: 0xc0a75d4  jal         func_29D750
    ctx->pc = 0x29D484u;
    SET_GPR_U32(ctx, 31, 0x29D48Cu);
    ctx->pc = 0x29D488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D484u;
    // 0x29d488: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D750u, 0x29D484u, 0x29D48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D48Cu;
label_29d48c:
    // 0x29d48c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x29d48cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x29d490: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29d490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29d494: 0x246333e0  addiu       $v1, $v1, 0x33E0
    ctx->pc = 0x29d494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13280));
    // 0x29d498: 0xae020264  sw          $v0, 0x264($s0)
    ctx->pc = 0x29d498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
    // 0x29d49c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x29D49Cu;
    {
        const bool branch_taken_0x29d49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D49Cu;
        // 0x29d4a0: 0xae030278  sw          $v1, 0x278($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d49c) {
            ctx->pc = 0x29D500u;
            goto label_29d500;
        }
    }
    ctx->pc = 0x29D4A4u;
label_29d4a4:
    // 0x29d4a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d4a8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29D4A8u;
    SET_GPR_U32(ctx, 31, 0x29D4B0u);
    ctx->pc = 0x29D4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D4A8u;
    // 0x29d4ac: 0x24a5c350  addiu       $a1, $a1, -0x3CB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29D4A8u, 0x29D4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D4B0u;
label_29d4b0:
    // 0x29d4b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29d4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29d4b4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29D4B4u;
    {
        const bool branch_taken_0x29d4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4B4u;
        // 0x29d4b8: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d4b4) {
            ctx->pc = 0x29D4D4u;
            goto label_29d4d4;
        }
    }
    ctx->pc = 0x29D4BCu;
    // 0x29d4bc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x29D4BCu;
    SET_GPR_U32(ctx, 31, 0x29D4C4u);
    ctx->pc = 0x29D4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D4BCu;
    // 0x29d4c0: 0x240402e0  addiu       $a0, $zero, 0x2E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x29D4BCu, 0x29D4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D4C4u;
label_29d4c4:
    // 0x29d4c4: 0xc0aa050  jal         func_2A8140
    ctx->pc = 0x29D4C4u;
    SET_GPR_U32(ctx, 31, 0x29D4CCu);
    ctx->pc = 0x29D4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D4C4u;
    // 0x29d4c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8140u, 0x29D4C4u, 0x29D4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D4CCu;
label_29d4cc:
    // 0x29d4cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x29D4CCu;
    {
        const bool branch_taken_0x29d4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4CCu;
        // 0x29d4d0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d4cc) {
            ctx->pc = 0x29D500u;
            goto label_29d500;
        }
    }
    ctx->pc = 0x29D4D4u;
label_29d4d4:
    // 0x29d4d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d4d8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29D4D8u;
    SET_GPR_U32(ctx, 31, 0x29D4E0u);
    ctx->pc = 0x29D4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D4D8u;
    // 0x29d4dc: 0x24a5c360  addiu       $a1, $a1, -0x3CA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29D4D8u, 0x29D4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D4E0u;
label_29d4e0:
    // 0x29d4e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29d4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29d4e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29D4E4u;
    {
        const bool branch_taken_0x29d4e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4E4u;
        // 0x29d4e8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d4e4) {
            ctx->pc = 0x29D504u;
            goto label_29d504;
        }
    }
    ctx->pc = 0x29D4ECu;
    // 0x29d4ec: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x29D4ECu;
    SET_GPR_U32(ctx, 31, 0x29D4F4u);
    ctx->pc = 0x29D4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D4ECu;
    // 0x29d4f0: 0x24040288  addiu       $a0, $zero, 0x288 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x29D4ECu, 0x29D4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D4F4u;
label_29d4f4:
    // 0x29d4f4: 0xc0a8f3c  jal         func_2A3CF0
    ctx->pc = 0x29D4F4u;
    SET_GPR_U32(ctx, 31, 0x29D4FCu);
    ctx->pc = 0x29D4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D4F4u;
    // 0x29d4f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3CF0u, 0x29D4F4u, 0x29D4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D4FCu;
label_29d4fc:
    // 0x29d4fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x29d4fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d500:
    // 0x29d500: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x29d500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29d504:
    // 0x29d504: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29d504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d508: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29d508u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29d50c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29d50cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29d510: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x29d510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29d514: 0x3e00008  jr          $ra
    ctx->pc = 0x29D514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D514u;
        // 0x29d518: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D51Cu;
    // 0x29d51c: 0x0  nop
    ctx->pc = 0x29d51cu;
    // NOP
    // 0x29d520: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x29d520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29d524: 0x0  nop
    ctx->pc = 0x29d524u;
    // NOP
    // 0x29d528: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x29d528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29d52c: 0x0  nop
    ctx->pc = 0x29d52cu;
    // NOP
    ctx->pc = 0x29d530u;
}
