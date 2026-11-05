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

// Function: sub_00322870
// Address: 0x322870 - 0x322990
void sub_00322870_0x322870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322870_0x322870");
#endif

    switch (ctx->pc) {
        case 0x3228a0u: goto label_3228a0;
        case 0x3228b8u: goto label_3228b8;
        case 0x3228d4u: goto label_3228d4;
        case 0x322918u: goto label_322918;
        case 0x322930u: goto label_322930;
        case 0x32294cu: goto label_32294c;
        default: break;
    }

    ctx->pc = 0x322870u;

    // 0x322870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x322870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x322874: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x322874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x322878: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x322878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32287c: 0x24443500  addiu       $a0, $v0, 0x3500
    ctx->pc = 0x32287cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13568));
    // 0x322880: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x322880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x322884: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x322884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x322888: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x322888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x32288c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x32288cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4A3504u));
    // 0x322890: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x322890u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4A350Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A350Cu, _value); } while (0);
    // 0x322894: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x322894u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322898: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x322898u;
    {
        const bool branch_taken_0x322898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322898u;
        // 0x32289c: 0x3c12004a  lui         $s2, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322898) {
            ctx->pc = 0x3228D4u;
            goto label_3228d4;
        }
    }
    ctx->pc = 0x3228A0u;
label_3228a0:
    // 0x3228a0: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x3228a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x3228a4: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x3228a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x3228a8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3228A8u;
    {
        const bool branch_taken_0x3228a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3228ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3228A8u;
        // 0x3228ac: 0x26233500  addiu       $v1, $s1, 0x3500 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 13568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3228a8) {
            ctx->pc = 0x3228D8u;
            goto label_3228d8;
        }
    }
    ctx->pc = 0x3228B0u;
    // 0x3228b0: 0xc08443c  jal         func_2110F0
    ctx->pc = 0x3228B0u;
    SET_GPR_U32(ctx, 31, 0x3228B8u);
    ctx->pc = 0x2110F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2110F0u, 0x3228B0u, 0x3228B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3228B8u;
label_3228b8:
    // 0x3228b8: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x3228b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x3228bc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3228BCu;
    {
        const bool branch_taken_0x3228bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3228C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3228BCu;
        // 0x3228c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3228bc) {
            ctx->pc = 0x3228D4u;
            goto label_3228d4;
        }
    }
    ctx->pc = 0x3228C4u;
    // 0x3228c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3228C4u;
    {
        const bool branch_taken_0x3228c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3228C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3228C4u;
        // 0x3228c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3228c4) {
            ctx->pc = 0x3228D4u;
            goto label_3228d4;
        }
    }
    ctx->pc = 0x3228CCu;
    // 0x3228cc: 0xc084492  jal         func_211248
    ctx->pc = 0x3228CCu;
    SET_GPR_U32(ctx, 31, 0x3228D4u);
    ctx->pc = 0x211248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211248u, 0x3228CCu, 0x3228D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3228D4u;
label_3228d4:
    // 0x3228d4: 0x26233500  addiu       $v1, $s1, 0x3500
    ctx->pc = 0x3228d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 13568));
label_3228d8:
    // 0x3228d8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3228d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3228dc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3228DCu;
    {
        const bool branch_taken_0x3228dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3228E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3228DCu;
        // 0x3228e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3228dc) {
            ctx->pc = 0x3228E8u;
            goto label_3228e8;
        }
    }
    ctx->pc = 0x3228E4u;
    // 0x3228e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3228e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3228e8:
    // 0x3228e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3228E8u;
    {
        const bool branch_taken_0x3228e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3228ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3228E8u;
        // 0x3228ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3228e8) {
            ctx->pc = 0x3228F8u;
            goto label_3228f8;
        }
    }
    ctx->pc = 0x3228F0u;
    // 0x3228f0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3228f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3228f4: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x3228f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_3228f8:
    // 0x3228f8: 0x1600ffe9  bnez        $s0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x3228F8u;
    {
        const bool branch_taken_0x3228f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3228FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3228F8u;
        // 0x3228fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3228f8) {
            ctx->pc = 0x3228A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3228a0;
        }
    }
    ctx->pc = 0x322900u;
    // 0x322900: 0x26423510  addiu       $v0, $s2, 0x3510
    ctx->pc = 0x322900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 13584));
    // 0x322904: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x322904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x322908: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x322908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32290c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x32290Cu;
    {
        const bool branch_taken_0x32290c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32290Cu;
        // 0x322910: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32290c) {
            ctx->pc = 0x32294Cu;
            goto label_32294c;
        }
    }
    ctx->pc = 0x322914u;
    // 0x322914: 0x0  nop
    ctx->pc = 0x322914u;
    // NOP
label_322918:
    // 0x322918: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x322918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x32291c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x32291cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x322920: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x322920u;
    {
        const bool branch_taken_0x322920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x322920) {
            ctx->pc = 0x322924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322920u;
            // 0x322924: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322950u;
            goto label_322950;
        }
    }
    ctx->pc = 0x322928u;
    // 0x322928: 0xc08443c  jal         func_2110F0
    ctx->pc = 0x322928u;
    SET_GPR_U32(ctx, 31, 0x322930u);
    ctx->pc = 0x2110F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2110F0u, 0x322928u, 0x322930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322930u;
label_322930:
    // 0x322930: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x322930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x322934: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x322934u;
    {
        const bool branch_taken_0x322934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x322938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322934u;
        // 0x322938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322934) {
            ctx->pc = 0x32294Cu;
            goto label_32294c;
        }
    }
    ctx->pc = 0x32293Cu;
    // 0x32293c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32293Cu;
    {
        const bool branch_taken_0x32293c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32293Cu;
        // 0x322940: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32293c) {
            ctx->pc = 0x32294Cu;
            goto label_32294c;
        }
    }
    ctx->pc = 0x322944u;
    // 0x322944: 0xc084492  jal         func_211248
    ctx->pc = 0x322944u;
    SET_GPR_U32(ctx, 31, 0x32294Cu);
    ctx->pc = 0x211248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211248u, 0x322944u, 0x32294Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32294Cu;
label_32294c:
    // 0x32294c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x32294cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_322950:
    // 0x322950: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x322950u;
    {
        const bool branch_taken_0x322950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322950u;
        // 0x322954: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322950) {
            ctx->pc = 0x32295Cu;
            goto label_32295c;
        }
    }
    ctx->pc = 0x322958u;
    // 0x322958: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x322958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32295c:
    // 0x32295c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32295Cu;
    {
        const bool branch_taken_0x32295c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32295Cu;
        // 0x322960: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32295c) {
            ctx->pc = 0x32296Cu;
            goto label_32296c;
        }
    }
    ctx->pc = 0x322964u;
    // 0x322964: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x322964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x322968: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x322968u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_32296c:
    // 0x32296c: 0x1600ffea  bnez        $s0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x32296Cu;
    {
        const bool branch_taken_0x32296c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x322970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32296Cu;
        // 0x322970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32296c) {
            ctx->pc = 0x322918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322918;
        }
    }
    ctx->pc = 0x322974u;
    // 0x322974: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x322974u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322978: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x322978u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32297c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32297cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322980: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x322980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x322984: 0x3e00008  jr          $ra
    ctx->pc = 0x322984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322984u;
        // 0x322988: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32298Cu;
    // 0x32298c: 0x0  nop
    ctx->pc = 0x32298cu;
    // NOP
    ctx->pc = 0x322990u;
}
