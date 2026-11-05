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

// Function: sub_0020D1B8
// Address: 0x20d1b8 - 0x20d4b8
void sub_0020D1B8_0x20d1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D1B8_0x20d1b8");
#endif

    switch (ctx->pc) {
        case 0x20d1d4u: goto label_20d1d4;
        case 0x20d1f0u: goto label_20d1f0;
        case 0x20d20cu: goto label_20d20c;
        case 0x20d228u: goto label_20d228;
        case 0x20d244u: goto label_20d244;
        case 0x20d260u: goto label_20d260;
        case 0x20d27cu: goto label_20d27c;
        case 0x20d298u: goto label_20d298;
        case 0x20d2b4u: goto label_20d2b4;
        case 0x20d2d0u: goto label_20d2d0;
        case 0x20d2ecu: goto label_20d2ec;
        case 0x20d308u: goto label_20d308;
        case 0x20d324u: goto label_20d324;
        case 0x20d340u: goto label_20d340;
        case 0x20d35cu: goto label_20d35c;
        case 0x20d378u: goto label_20d378;
        case 0x20d394u: goto label_20d394;
        case 0x20d3b0u: goto label_20d3b0;
        case 0x20d3ccu: goto label_20d3cc;
        case 0x20d3e8u: goto label_20d3e8;
        case 0x20d404u: goto label_20d404;
        case 0x20d420u: goto label_20d420;
        case 0x20d444u: goto label_20d444;
        case 0x20d460u: goto label_20d460;
        case 0x20d47cu: goto label_20d47c;
        case 0x20d49cu: goto label_20d49c;
        default: break;
    }

    ctx->pc = 0x20d1b8u;

    // 0x20d1b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20d1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x20d1bc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20d1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20d1c0: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x20d1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x20d1c4: 0x24a510f8  addiu       $a1, $a1, 0x10F8
    ctx->pc = 0x20d1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4344));
    // 0x20d1c8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x20d1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x20d1cc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20D1CCu;
    SET_GPR_U32(ctx, 31, 0x20D1D4u);
    ctx->pc = 0x20D1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D1CCu;
    // 0x20d1d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20D1CCu, 0x20D1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D1D4u;
label_20d1d4:
    // 0x20d1d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d1d8: 0x144000b3  bnez        $v0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x20D1D8u;
    {
        const bool branch_taken_0x20d1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D1D8u;
        // 0x20d1dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d1d8) {
            ctx->pc = 0x20D4A8u;
            goto label_20d4a8;
        }
    }
    ctx->pc = 0x20D1E0u;
    // 0x20d1e0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20d1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20d1e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d1e8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20D1E8u;
    SET_GPR_U32(ctx, 31, 0x20D1F0u);
    ctx->pc = 0x20D1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D1E8u;
    // 0x20d1ec: 0x24a51108  addiu       $a1, $a1, 0x1108 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20D1E8u, 0x20D1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D1F0u;
label_20d1f0:
    // 0x20d1f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d1f4: 0x144000ac  bnez        $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x20D1F4u;
    {
        const bool branch_taken_0x20d1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D1F4u;
        // 0x20d1f8: 0x2402020f  addiu       $v0, $zero, 0x20F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 527));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d1f4) {
            ctx->pc = 0x20D4A8u;
            goto label_20d4a8;
        }
    }
    ctx->pc = 0x20D1FCu;
    // 0x20d1fc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20d1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20d200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d204: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20D204u;
    SET_GPR_U32(ctx, 31, 0x20D20Cu);
    ctx->pc = 0x20D208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D204u;
    // 0x20d208: 0x24a51118  addiu       $a1, $a1, 0x1118 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20D204u, 0x20D20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D20Cu;
label_20d20c:
    // 0x20d20c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d210: 0x144000a5  bnez        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x20D210u;
    {
        const bool branch_taken_0x20d210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D210u;
        // 0x20d214: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d210) {
            ctx->pc = 0x20D4A8u;
            goto label_20d4a8;
        }
    }
    ctx->pc = 0x20D218u;
    // 0x20d218: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20d218u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20d21c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d220: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20D220u;
    SET_GPR_U32(ctx, 31, 0x20D228u);
    ctx->pc = 0x20D224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D220u;
    // 0x20d224: 0x24a51120  addiu       $a1, $a1, 0x1120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20D220u, 0x20D228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D228u;
label_20d228:
    // 0x20d228: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d22c: 0x1440009e  bnez        $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x20D22Cu;
    {
        const bool branch_taken_0x20d22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D22Cu;
        // 0x20d230: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d22c) {
            ctx->pc = 0x20D4A8u;
            goto label_20d4a8;
        }
    }
    ctx->pc = 0x20D234u;
    // 0x20d234: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20d234u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20d238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d23c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20D23Cu;
    SET_GPR_U32(ctx, 31, 0x20D244u);
    ctx->pc = 0x20D240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D23Cu;
    // 0x20d240: 0x24a51130  addiu       $a1, $a1, 0x1130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20D23Cu, 0x20D244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D244u;
label_20d244:
    // 0x20d244: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d248: 0x14400097  bnez        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x20D248u;
    {
        const bool branch_taken_0x20d248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D248u;
        // 0x20d24c: 0x2402003f  addiu       $v0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d248) {
            ctx->pc = 0x20D4A8u;
            goto label_20d4a8;
        }
    }
    ctx->pc = 0x20D250u;
    // 0x20d250: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20d250u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20d254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d258: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20D258u;
    SET_GPR_U32(ctx, 31, 0x20D260u);
    ctx->pc = 0x20D25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D258u;
    // 0x20d25c: 0x24a51140  addiu       $a1, $a1, 0x1140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20D258u, 0x20D260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D260u;
label_20d260:
    // 0x20d260: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d264: 0x14400090  bnez        $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x20D264u;
    {
        const bool branch_taken_0x20d264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D264u;
        // 0x20d268: 0x24020401  addiu       $v0, $zero, 0x401 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d264) {
            ctx->pc = 0x20D4A8u;
            goto label_20d4a8;
        }
    }
    ctx->pc = 0x20D26Cu;
    // 0x20d26c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20d26cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20d270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d274: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20D274u;
    SET_GPR_U32(ctx, 31, 0x20D27Cu);
    ctx->pc = 0x20D278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D274u;
    // 0x20d278: 0x24a51150  addiu       $a1, $a1, 0x1150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20D274u, 0x20D27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D27Cu;
label_20d27c:
    // 0x20d27c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d280: 0x14400089  bnez        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x20D280u;
    {
        const bool branch_taken_0x20d280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D280u;
        // 0x20d284: 0x24021001  addiu       $v0, $zero, 0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d280) {
            ctx->pc = 0x20D4A8u;
            goto label_20d4a8;
        }
    }
    ctx->pc = 0x20D288u;
    // 0x20d288: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20d288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20d28c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d290: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20D290u;
    SET_GPR_U32(ctx, 31, 0x20D298u);
    ctx->pc = 0x20D294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D290u;
    // 0x20d294: 0x24a51160  addiu       $a1, $a1, 0x1160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20D290u, 0x20D298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D298u;
label_20d298:
    // 0x20d298: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d29c: 0x14400082  bnez        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x20D29Cu;
    {
        const bool branch_taken_0x20d29c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D29Cu;
        // 0x20d2a0: 0x24023001  addiu       $v0, $zero, 0x3001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d29c) {
            ctx->pc = 0x20D4A8u;
            goto label_20d4a8;
        }
    }
    ctx->pc = 0x20D2A4u;
    // 0x20d2a4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20d2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20d2a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d2ac: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20D2ACu;
    SET_GPR_U32(ctx, 31, 0x20D2B4u);
    ctx->pc = 0x20D2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D2ACu;
    // 0x20d2b0: 0x24a51170  addiu       $a1, $a1, 0x1170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20D2ACu, 0x20D2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D2B4u;
label_20d2b4:
    // 0x20d2b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d2b8: 0x1440007b  bnez        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x20D2B8u;
    {
        const bool branch_taken_0x20d2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D2B8u;
        // 0x20d2bc: 0x24027001  addiu       $v0, $zero, 0x7001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28673));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d2b8) {
            ctx->pc = 0x20D4A8u;
            goto label_20d4a8;
        }
    }
    ctx->pc = 0x20D2C0u;
    // 0x20d2c0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20d2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20d2c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d2c8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20D2C8u;
    SET_GPR_U32(ctx, 31, 0x20D2D0u);
    ctx->pc = 0x20D2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D2C8u;
    // 0x20d2cc: 0x24a51180  addiu       $a1, $a1, 0x1180 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20D2C8u, 0x20D2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D2D0u;
label_20d2d0:
    // 0x20d2d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d2d4: 0x14400074  bnez        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x20D2D4u;
    {
        const bool branch_taken_0x20d2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D2D4u;
        // 0x20d2d8: 0x34028001  ori         $v0, $zero, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d2d4) {
            ctx->pc = 0x20D4A8u;
            goto label_20d4a8;
        }
    }
    ctx->pc = 0x20D2DCu;
    // 0x20d2dc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20d2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20d2e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d2e4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20D2E4u;
    SET_GPR_U32(ctx, 31, 0x20D2ECu);
    ctx->pc = 0x20D2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D2E4u;
    // 0x20d2e8: 0x24a51188  addiu       $a1, $a1, 0x1188 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20D2E4u, 0x20D2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D2ECu;
label_20d2ec:
    // 0x20d2ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d2f0: 0x1440006c  bnez        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x20D2F0u;
    {
        const bool branch_taken_0x20d2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D2F0u;
        // 0x20d2f4: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d2f0) {
            ctx->pc = 0x20D4A4u;
            goto label_20d4a4;
        }
    }
    ctx->pc = 0x20D2F8u;
    // 0x20d2f8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20d2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20d2fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d300: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20D300u;
    SET_GPR_U32(ctx, 31, 0x20D308u);
    ctx->pc = 0x20D304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D300u;
    // 0x20d304: 0x24a51190  addiu       $a1, $a1, 0x1190 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20D300u, 0x20D308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D308u;
label_20d308:
    // 0x20d308: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d30c: 0x14400065  bnez        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x20D30Cu;
    {
        const bool branch_taken_0x20d30c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D30Cu;
        // 0x20d310: 0x3c020006  lui         $v0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d30c) {
            ctx->pc = 0x20D4A4u;
            goto label_20d4a4;
        }
    }
    ctx->pc = 0x20D314u;
    // 0x20d314: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20d314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20d318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d31c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20D31Cu;
    SET_GPR_U32(ctx, 31, 0x20D324u);
    ctx->pc = 0x20D320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D31Cu;
    // 0x20d320: 0x24a51198  addiu       $a1, $a1, 0x1198 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20D31Cu, 0x20D324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D324u;
label_20d324:
    // 0x20d324: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d328: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x20D328u;
    {
        const bool branch_taken_0x20d328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D328u;
        // 0x20d32c: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d328) {
            ctx->pc = 0x20D4A4u;
            goto label_20d4a4;
        }
    }
    ctx->pc = 0x20D330u;
    // 0x20d330: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20d330u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20d334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d338: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20D338u;
    SET_GPR_U32(ctx, 31, 0x20D340u);
    ctx->pc = 0x20D33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D338u;
    // 0x20d33c: 0x24a511a8  addiu       $a1, $a1, 0x11A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20D338u, 0x20D340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D340u;
label_20d340:
    // 0x20d340: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d344: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x20D344u;
    {
        const bool branch_taken_0x20d344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D344u;
        // 0x20d348: 0x3c02000a  lui         $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d344) {
            ctx->pc = 0x20D4A4u;
            goto label_20d4a4;
        }
    }
    ctx->pc = 0x20D34Cu;
    // 0x20d34c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20d34cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20d350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d354: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20D354u;
    SET_GPR_U32(ctx, 31, 0x20D35Cu);
    ctx->pc = 0x20D358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D354u;
    // 0x20d358: 0x24a511b8  addiu       $a1, $a1, 0x11B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20D354u, 0x20D35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D35Cu;
label_20d35c:
    // 0x20d35c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d360: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x20D360u;
    {
        const bool branch_taken_0x20d360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D360u;
        // 0x20d364: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d360) {
            ctx->pc = 0x20D4A4u;
            goto label_20d4a4;
        }
    }
    ctx->pc = 0x20D368u;
    // 0x20d368: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20d368u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20d36c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d370: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20D370u;
    SET_GPR_U32(ctx, 31, 0x20D378u);
    ctx->pc = 0x20D374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D370u;
    // 0x20d374: 0x24a511c8  addiu       $a1, $a1, 0x11C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20D370u, 0x20D378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D378u;
label_20d378:
    // 0x20d378: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d37c: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x20D37Cu;
    {
        const bool branch_taken_0x20d37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D37Cu;
        // 0x20d380: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d37c) {
            ctx->pc = 0x20D4A4u;
            goto label_20d4a4;
        }
    }
    ctx->pc = 0x20D384u;
    // 0x20d384: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20d384u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20d388: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d38c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20D38Cu;
    SET_GPR_U32(ctx, 31, 0x20D394u);
    ctx->pc = 0x20D390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D38Cu;
    // 0x20d390: 0x24a511d8  addiu       $a1, $a1, 0x11D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20D38Cu, 0x20D394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D394u;
label_20d394:
    // 0x20d394: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d398: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x20D398u;
    {
        const bool branch_taken_0x20d398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D398u;
        // 0x20d39c: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d398) {
            ctx->pc = 0x20D4A4u;
            goto label_20d4a4;
        }
    }
    ctx->pc = 0x20D3A0u;
    // 0x20d3a0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20d3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20d3a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d3a8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20D3A8u;
    SET_GPR_U32(ctx, 31, 0x20D3B0u);
    ctx->pc = 0x20D3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D3A8u;
    // 0x20d3ac: 0x24a511e8  addiu       $a1, $a1, 0x11E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20D3A8u, 0x20D3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D3B0u;
label_20d3b0:
    // 0x20d3b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d3b4: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x20D3B4u;
    {
        const bool branch_taken_0x20d3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D3B4u;
        // 0x20d3b8: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d3b4) {
            ctx->pc = 0x20D4A4u;
            goto label_20d4a4;
        }
    }
    ctx->pc = 0x20D3BCu;
    // 0x20d3bc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20d3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20d3c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d3c4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20D3C4u;
    SET_GPR_U32(ctx, 31, 0x20D3CCu);
    ctx->pc = 0x20D3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D3C4u;
    // 0x20d3c8: 0x24a511f8  addiu       $a1, $a1, 0x11F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20D3C4u, 0x20D3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D3CCu;
label_20d3cc:
    // 0x20d3cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d3d0: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x20D3D0u;
    {
        const bool branch_taken_0x20d3d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D3D0u;
        // 0x20d3d4: 0x3c020200  lui         $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d3d0) {
            ctx->pc = 0x20D4A4u;
            goto label_20d4a4;
        }
    }
    ctx->pc = 0x20D3D8u;
    // 0x20d3d8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20d3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20d3dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d3e0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20D3E0u;
    SET_GPR_U32(ctx, 31, 0x20D3E8u);
    ctx->pc = 0x20D3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D3E0u;
    // 0x20d3e4: 0x24a51208  addiu       $a1, $a1, 0x1208 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20D3E0u, 0x20D3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D3E8u;
label_20d3e8:
    // 0x20d3e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d3ec: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x20D3ECu;
    {
        const bool branch_taken_0x20d3ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D3ECu;
        // 0x20d3f0: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d3ec) {
            ctx->pc = 0x20D4A4u;
            goto label_20d4a4;
        }
    }
    ctx->pc = 0x20D3F4u;
    // 0x20d3f4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20d3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20d3f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d3fc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20D3FCu;
    SET_GPR_U32(ctx, 31, 0x20D404u);
    ctx->pc = 0x20D400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D3FCu;
    // 0x20d400: 0x24a51218  addiu       $a1, $a1, 0x1218 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20D3FCu, 0x20D404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D404u;
label_20d404:
    // 0x20d404: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d408: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x20D408u;
    {
        const bool branch_taken_0x20d408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D408u;
        // 0x20d40c: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d408) {
            ctx->pc = 0x20D4A4u;
            goto label_20d4a4;
        }
    }
    ctx->pc = 0x20D410u;
    // 0x20d410: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20d410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20d414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d418: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20D418u;
    SET_GPR_U32(ctx, 31, 0x20D420u);
    ctx->pc = 0x20D41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D418u;
    // 0x20d41c: 0x24a51228  addiu       $a1, $a1, 0x1228 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20D418u, 0x20D420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D420u;
label_20d420:
    // 0x20d420: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d424: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20D424u;
    {
        const bool branch_taken_0x20d424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D424u;
        // 0x20d428: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d424) {
            ctx->pc = 0x20D438u;
            goto label_20d438;
        }
    }
    ctx->pc = 0x20D42Cu;
    // 0x20d42c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x20d42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x20d430: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x20D430u;
    {
        const bool branch_taken_0x20d430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D430u;
        // 0x20d434: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d430) {
            ctx->pc = 0x20D4A8u;
            goto label_20d4a8;
        }
    }
    ctx->pc = 0x20D438u;
label_20d438:
    // 0x20d438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d43c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20D43Cu;
    SET_GPR_U32(ctx, 31, 0x20D444u);
    ctx->pc = 0x20D440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D43Cu;
    // 0x20d440: 0x24a51248  addiu       $a1, $a1, 0x1248 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20D43Cu, 0x20D444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D444u;
label_20d444:
    // 0x20d444: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d448: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x20D448u;
    {
        const bool branch_taken_0x20d448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D448u;
        // 0x20d44c: 0x24020081  addiu       $v0, $zero, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d448) {
            ctx->pc = 0x20D4A8u;
            goto label_20d4a8;
        }
    }
    ctx->pc = 0x20D450u;
    // 0x20d450: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20d450u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20d454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d458: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20D458u;
    SET_GPR_U32(ctx, 31, 0x20D460u);
    ctx->pc = 0x20D45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D458u;
    // 0x20d45c: 0x24a51258  addiu       $a1, $a1, 0x1258 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20D458u, 0x20D460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D460u;
label_20d460:
    // 0x20d460: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d464: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x20D464u;
    {
        const bool branch_taken_0x20d464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D464u;
        // 0x20d468: 0x24020181  addiu       $v0, $zero, 0x181 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 385));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d464) {
            ctx->pc = 0x20D4A8u;
            goto label_20d4a8;
        }
    }
    ctx->pc = 0x20D46Cu;
    // 0x20d46c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20d46cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20d470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d474: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20D474u;
    SET_GPR_U32(ctx, 31, 0x20D47Cu);
    ctx->pc = 0x20D478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D474u;
    // 0x20d478: 0x24a51268  addiu       $a1, $a1, 0x1268 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20D474u, 0x20D47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D47Cu;
label_20d47c:
    // 0x20d47c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d480: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20D480u;
    {
        const bool branch_taken_0x20d480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D480u;
        // 0x20d484: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d480) {
            ctx->pc = 0x20D4A4u;
            goto label_20d4a4;
        }
    }
    ctx->pc = 0x20D488u;
    // 0x20d488: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x20d488u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20d48c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20d48cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20d490: 0x24a51358  addiu       $a1, $a1, 0x1358
    ctx->pc = 0x20d490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4952));
    // 0x20d494: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x20D494u;
    SET_GPR_U32(ctx, 31, 0x20D49Cu);
    ctx->pc = 0x20D498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D494u;
    // 0x20d498: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x20D494u, 0x20D49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D49Cu;
label_20d49c:
    // 0x20d49c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20D49Cu;
    {
        const bool branch_taken_0x20d49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D49Cu;
        // 0x20d4a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d49c) {
            ctx->pc = 0x20D4A8u;
            goto label_20d4a8;
        }
    }
    ctx->pc = 0x20D4A4u;
label_20d4a4:
    // 0x20d4a4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x20d4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_20d4a8:
    // 0x20d4a8: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x20d4a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20d4ac: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x20d4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20d4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x20D4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D4B0u;
        // 0x20d4b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D4B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D4B8u;
}
