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

// Function: sub_002110F0
// Address: 0x2110f0 - 0x211248
void sub_002110F0_0x2110f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002110F0_0x2110f0");
#endif

    switch (ctx->pc) {
        case 0x211134u: goto label_211134;
        case 0x211154u: goto label_211154;
        case 0x2111a8u: goto label_2111a8;
        case 0x2111b8u: goto label_2111b8;
        case 0x2111e0u: goto label_2111e0;
        case 0x2111f0u: goto label_2111f0;
        case 0x211224u: goto label_211224;
        default: break;
    }

    ctx->pc = 0x2110f0u;

    // 0x2110f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2110f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2110f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2110f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2110f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2110f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2110fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2110fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211100: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x211100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x211104: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x211104u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211108: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x211108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21110c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x21110cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211110: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x211110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x211114: 0x8e2400bc  lw          $a0, 0xBC($s1)
    ctx->pc = 0x211114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x211118: 0x3082020f  andi        $v0, $a0, 0x20F
    ctx->pc = 0x211118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)527);
    // 0x21111c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x21111cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x211120: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x211120u;
    {
        const bool branch_taken_0x211120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211120u;
        // 0x211124: 0x8e3001a8  lw          $s0, 0x1A8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211120) {
            ctx->pc = 0x21113Cu;
            goto label_21113c;
        }
    }
    ctx->pc = 0x211128u;
    // 0x211128: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x211128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21112c: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x21112Cu;
    SET_GPR_U32(ctx, 31, 0x211134u);
    ctx->pc = 0x211130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21112Cu;
    // 0x211130: 0x24050448  addiu       $a1, $zero, 0x448 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x21112Cu, 0x211134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211134u;
label_211134:
    // 0x211134: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x211134u;
    {
        const bool branch_taken_0x211134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211134u;
        // 0x211138: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211134) {
            ctx->pc = 0x2111A0u;
            goto label_2111a0;
        }
    }
    ctx->pc = 0x21113Cu;
label_21113c:
    // 0x21113c: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x21113cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x211140: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x211140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x211144: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x211144u;
    {
        const bool branch_taken_0x211144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211144u;
        // 0x211148: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211144) {
            ctx->pc = 0x211164u;
            goto label_211164;
        }
    }
    ctx->pc = 0x21114Cu;
    // 0x21114c: 0xc08f644  jal         func_23D910
    ctx->pc = 0x21114Cu;
    SET_GPR_U32(ctx, 31, 0x211154u);
    ctx->pc = 0x211150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21114Cu;
    // 0x211150: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D910u, 0x21114Cu, 0x211154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211154u;
label_211154:
    // 0x211154: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x211154u;
    {
        const bool branch_taken_0x211154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211154u;
        // 0x211158: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211154) {
            ctx->pc = 0x2111C0u;
            goto label_2111c0;
        }
    }
    ctx->pc = 0x21115Cu;
    // 0x21115c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x21115Cu;
    {
        const bool branch_taken_0x21115c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21115Cu;
        // 0x211160: 0x8c53bd50  lw          $s3, -0x42B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21115c) {
            ctx->pc = 0x2111C4u;
            goto label_2111c4;
        }
    }
    ctx->pc = 0x211164u;
label_211164:
    // 0x211164: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x211164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x211168: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x211168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x21116c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21116Cu;
    {
        const bool branch_taken_0x21116c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x211170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21116Cu;
        // 0x211170: 0x30820401  andi        $v0, $a0, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1025);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21116c) {
            ctx->pc = 0x21117Cu;
            goto label_21117c;
        }
    }
    ctx->pc = 0x211174u;
    // 0x211174: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x211174u;
    {
        const bool branch_taken_0x211174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211174u;
        // 0x211178: 0x8e330220  lw          $s3, 0x220($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211174) {
            ctx->pc = 0x2111C4u;
            goto label_2111c4;
        }
    }
    ctx->pc = 0x21117Cu;
label_21117c:
    // 0x21117c: 0x38420401  xori        $v0, $v0, 0x401
    ctx->pc = 0x21117cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1025);
    // 0x211180: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x211180u;
    {
        const bool branch_taken_0x211180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x211180) {
            ctx->pc = 0x211198u;
            goto label_211198;
        }
    }
    ctx->pc = 0x211188u;
    // 0x211188: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x211188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x21118c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21118cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211190: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x211190u;
    {
        const bool branch_taken_0x211190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211190u;
        // 0x211194: 0x24720070  addiu       $s2, $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211190) {
            ctx->pc = 0x2111C4u;
            goto label_2111c4;
        }
    }
    ctx->pc = 0x211198u;
label_211198:
    // 0x211198: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x211198u;
    {
        const bool branch_taken_0x211198 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211198u;
        // 0x21119c: 0x26320020  addiu       $s2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211198) {
            ctx->pc = 0x2111C4u;
            goto label_2111c4;
        }
    }
    ctx->pc = 0x2111A0u;
label_2111a0:
    // 0x2111a0: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x2111A0u;
    SET_GPR_U32(ctx, 31, 0x2111A8u);
    ctx->pc = 0x2111A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2111A0u;
    // 0x2111a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x2111A0u, 0x2111A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2111A8u;
label_2111a8:
    // 0x2111a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2111A8u;
    {
        const bool branch_taken_0x2111a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2111ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111A8u;
        // 0x2111ac: 0x261200b0  addiu       $s2, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2111a8) {
            ctx->pc = 0x2111C4u;
            goto label_2111c4;
        }
    }
    ctx->pc = 0x2111B0u;
    // 0x2111b0: 0xc0c4900  jal         func_312400
    ctx->pc = 0x2111B0u;
    SET_GPR_U32(ctx, 31, 0x2111B8u);
    ctx->pc = 0x2111B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2111B0u;
    // 0x2111b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x2111B0u, 0x2111B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2111B8u;
label_2111b8:
    // 0x2111b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2111B8u;
    {
        const bool branch_taken_0x2111b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2111BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111B8u;
        // 0x2111bc: 0x261200b0  addiu       $s2, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2111b8) {
            ctx->pc = 0x2111C4u;
            goto label_2111c4;
        }
    }
    ctx->pc = 0x2111C0u;
label_2111c0:
    // 0x2111c0: 0x26320020  addiu       $s2, $s1, 0x20
    ctx->pc = 0x2111c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_2111c4:
    // 0x2111c4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2111C4u;
    {
        const bool branch_taken_0x2111c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2111C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111C4u;
        // 0x2111c8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2111c4) {
            ctx->pc = 0x2111E8u;
            goto label_2111e8;
        }
    }
    ctx->pc = 0x2111CCu;
    // 0x2111cc: 0x8e6401a0  lw          $a0, 0x1A0($s3)
    ctx->pc = 0x2111ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 416)));
    // 0x2111d0: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2111D0u;
    {
        const bool branch_taken_0x2111d0 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x2111d0) {
            ctx->pc = 0x2111F4u;
            goto label_2111f4;
        }
    }
    ctx->pc = 0x2111D8u;
    // 0x2111d8: 0xc0c67da  jal         func_319F68
    ctx->pc = 0x2111D8u;
    SET_GPR_U32(ctx, 31, 0x2111E0u);
    ctx->pc = 0x319F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319F68u, 0x2111D8u, 0x2111E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2111E0u;
label_2111e0:
    // 0x2111e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2111E0u;
    {
        const bool branch_taken_0x2111e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2111E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111E0u;
        // 0x2111e4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2111e0) {
            ctx->pc = 0x2111F4u;
            goto label_2111f4;
        }
    }
    ctx->pc = 0x2111E8u;
label_2111e8:
    // 0x2111e8: 0xc0c67ea  jal         func_319FA8
    ctx->pc = 0x2111E8u;
    SET_GPR_U32(ctx, 31, 0x2111F0u);
    ctx->pc = 0x2111ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2111E8u;
    // 0x2111ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319FA8u, 0x2111E8u, 0x2111F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2111F0u;
label_2111f0:
    // 0x2111f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2111f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2111f4:
    // 0x2111f4: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2111F4u;
    {
        const bool branch_taken_0x2111f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2111F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111F4u;
        // 0x2111f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2111f4) {
            ctx->pc = 0x21122Cu;
            goto label_21122c;
        }
    }
    ctx->pc = 0x2111FCu;
    // 0x2111fc: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x2111fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x211200: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x211200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
    // 0x211204: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x211204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x211208: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x211208u;
    {
        const bool branch_taken_0x211208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211208u;
        // 0x21120c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211208) {
            ctx->pc = 0x211230u;
            goto label_211230;
        }
    }
    ctx->pc = 0x211210u;
    // 0x211210: 0x8e2401a0  lw          $a0, 0x1A0($s1)
    ctx->pc = 0x211210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x211214: 0x4800007  bltz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x211214u;
    {
        const bool branch_taken_0x211214 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x211218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211214u;
        // 0x211218: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211214) {
            ctx->pc = 0x211234u;
            goto label_211234;
        }
    }
    ctx->pc = 0x21121Cu;
    // 0x21121c: 0xc0c67da  jal         func_319F68
    ctx->pc = 0x21121Cu;
    SET_GPR_U32(ctx, 31, 0x211224u);
    ctx->pc = 0x319F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319F68u, 0x21121Cu, 0x211224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211224u;
label_211224:
    // 0x211224: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x211224u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211228: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x211228u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21122c:
    // 0x21122c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x21122cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_211230:
    // 0x211230: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x211230u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_211234:
    // 0x211234: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x211234u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211238: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x211238u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21123c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21123cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x211240: 0x3e00008  jr          $ra
    ctx->pc = 0x211240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211240u;
        // 0x211244: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211248u;
}
