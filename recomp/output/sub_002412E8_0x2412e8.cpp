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

// Function: sub_002412E8
// Address: 0x2412e8 - 0x241408
void sub_002412E8_0x2412e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002412E8_0x2412e8");
#endif

    switch (ctx->pc) {
        case 0x241308u: goto label_241308;
        case 0x241320u: goto label_241320;
        case 0x241330u: goto label_241330;
        case 0x241354u: goto label_241354;
        case 0x241368u: goto label_241368;
        case 0x241380u: goto label_241380;
        case 0x2413a4u: goto label_2413a4;
        case 0x2413b4u: goto label_2413b4;
        case 0x2413dcu: goto label_2413dc;
        case 0x2413ecu: goto label_2413ec;
        default: break;
    }

    ctx->pc = 0x2412e8u;

    // 0x2412e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2412e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2412ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2412ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2412f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2412f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2412f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2412f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2412f8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2412f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2412fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2412fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x241300: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x241300u;
    SET_GPR_U32(ctx, 31, 0x241308u);
    ctx->pc = 0x241304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241300u;
    // 0x241304: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x241300u, 0x241308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241308u;
label_241308:
    // 0x241308: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x241308u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24130c: 0x1220002f  beqz        $s1, . + 4 + (0x2F << 2)
    ctx->pc = 0x24130Cu;
    {
        const bool branch_taken_0x24130c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x241310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24130Cu;
        // 0x241310: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24130c) {
            ctx->pc = 0x2413CCu;
            goto label_2413cc;
        }
    }
    ctx->pc = 0x241314u;
    // 0x241314: 0x8e300274  lw          $s0, 0x274($s1)
    ctx->pc = 0x241314u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
    // 0x241318: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x241318u;
    SET_GPR_U32(ctx, 31, 0x241320u);
    ctx->pc = 0x24131Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241318u;
    // 0x24131c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x241318u, 0x241320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241320u;
label_241320:
    // 0x241320: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x241320u;
    {
        const bool branch_taken_0x241320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241320) {
            ctx->pc = 0x241324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241320u;
            // 0x241324: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24133Cu;
            goto label_24133c;
        }
    }
    ctx->pc = 0x241328u;
    // 0x241328: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x241328u;
    SET_GPR_U32(ctx, 31, 0x241330u);
    ctx->pc = 0x24132Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241328u;
    // 0x24132c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x241328u, 0x241330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241330u;
label_241330:
    // 0x241330: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x241330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241334: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x241334u;
    {
        const bool branch_taken_0x241334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x241334) {
            ctx->pc = 0x241338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241334u;
            // 0x241338: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24133Cu;
            goto label_24133c;
        }
    }
    ctx->pc = 0x24133Cu;
label_24133c:
    // 0x24133c: 0x1260001b  beqz        $s3, . + 4 + (0x1B << 2)
    ctx->pc = 0x24133Cu;
    {
        const bool branch_taken_0x24133c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x241340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24133Cu;
        // 0x241340: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24133c) {
            ctx->pc = 0x2413ACu;
            goto label_2413ac;
        }
    }
    ctx->pc = 0x241344u;
    // 0x241344: 0x8e220274  lw          $v0, 0x274($s1)
    ctx->pc = 0x241344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
    // 0x241348: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x241348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24134c: 0xc08dc16  jal         func_237058
    ctx->pc = 0x24134Cu;
    SET_GPR_U32(ctx, 31, 0x241354u);
    ctx->pc = 0x241350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24134Cu;
    // 0x241350: 0x8c500060  lw          $s0, 0x60($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237058u, 0x24134Cu, 0x241354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241354u;
label_241354:
    // 0x241354: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x241354u;
    {
        const bool branch_taken_0x241354 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x241358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241354u;
        // 0x241358: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241354) {
            ctx->pc = 0x2413CCu;
            goto label_2413cc;
        }
    }
    ctx->pc = 0x24135Cu;
    // 0x24135c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24135cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241360: 0xc0984bc  jal         func_2612F0
    ctx->pc = 0x241360u;
    SET_GPR_U32(ctx, 31, 0x241368u);
    ctx->pc = 0x241364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241360u;
    // 0x241364: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2612F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2612F0u, 0x241360u, 0x241368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241368u;
label_241368:
    // 0x241368: 0x8e460334  lw          $a2, 0x334($s2)
    ctx->pc = 0x241368u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x24136c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24136cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241370: 0x8cc201e4  lw          $v0, 0x1E4($a2)
    ctx->pc = 0x241370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
    // 0x241374: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x241374u;
    {
        const bool branch_taken_0x241374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241374u;
        // 0x241378: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241374) {
            ctx->pc = 0x24139Cu;
            goto label_24139c;
        }
    }
    ctx->pc = 0x24137Cu;
    // 0x24137c: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x24137cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
label_241380:
    // 0x241380: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x241380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x241384: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x241384u;
    {
        const bool branch_taken_0x241384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241384u;
        // 0x241388: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241384) {
            ctx->pc = 0x24139Cu;
            goto label_24139c;
        }
    }
    ctx->pc = 0x24138Cu;
    // 0x24138c: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x24138cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x241390: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x241390u;
    {
        const bool branch_taken_0x241390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241390u;
        // 0x241394: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241390) {
            ctx->pc = 0x241380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241380;
        }
    }
    ctx->pc = 0x241398u;
    // 0x241398: 0x8cc201e8  lw          $v0, 0x1E8($a2)
    ctx->pc = 0x241398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_24139c:
    // 0x24139c: 0xc073ef8  jal         func_1CFBE0
    ctx->pc = 0x24139Cu;
    SET_GPR_U32(ctx, 31, 0x2413A4u);
    ctx->pc = 0x2413A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24139Cu;
    // 0x2413a0: 0xc44c001c  lwc1        $f12, 0x1C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFBE0u, 0x24139Cu, 0x2413A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2413A4u;
label_2413a4:
    // 0x2413a4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2413A4u;
    {
        const bool branch_taken_0x2413a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2413A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2413A4u;
        // 0x2413a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2413a4) {
            ctx->pc = 0x2413D0u;
            goto label_2413d0;
        }
    }
    ctx->pc = 0x2413ACu;
label_2413ac:
    // 0x2413ac: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x2413ACu;
    SET_GPR_U32(ctx, 31, 0x2413B4u);
    ctx->pc = 0x2413B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2413ACu;
    // 0x2413b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2413ACu, 0x2413B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2413B4u;
label_2413b4:
    // 0x2413b4: 0x2403002e  addiu       $v1, $zero, 0x2E
    ctx->pc = 0x2413b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x2413b8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2413B8u;
    {
        const bool branch_taken_0x2413b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2413BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2413B8u;
        // 0x2413bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2413b8) {
            ctx->pc = 0x2413D0u;
            goto label_2413d0;
        }
    }
    ctx->pc = 0x2413C0u;
    // 0x2413c0: 0x8e430110  lw          $v1, 0x110($s2)
    ctx->pc = 0x2413c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x2413c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2413c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2413c8: 0xa0620030  sb          $v0, 0x30($v1)
    ctx->pc = 0x2413c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 48), (uint8_t)GPR_U32(ctx, 2));
label_2413cc:
    // 0x2413cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2413ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2413d0:
    // 0x2413d0: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x2413d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2413d4: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x2413D4u;
    SET_GPR_U32(ctx, 31, 0x2413DCu);
    ctx->pc = 0x2413D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2413D4u;
    // 0x2413d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2413D4u, 0x2413DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2413DCu;
label_2413dc:
    // 0x2413dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2413dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2413e0: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x2413e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2413e4: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x2413E4u;
    SET_GPR_U32(ctx, 31, 0x2413ECu);
    ctx->pc = 0x2413E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2413E4u;
    // 0x2413e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2413E4u, 0x2413ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2413ECu;
label_2413ec:
    // 0x2413ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2413ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2413f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2413f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2413f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2413f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2413f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2413f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2413fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2413fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x241400: 0x3e00008  jr          $ra
    ctx->pc = 0x241400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241400u;
        // 0x241404: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241408u;
}
