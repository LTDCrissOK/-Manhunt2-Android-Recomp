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

// Function: sub_00192C18
// Address: 0x192c18 - 0x192de8
void sub_00192C18_0x192c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192C18_0x192c18");
#endif

    switch (ctx->pc) {
        case 0x192c60u: goto label_192c60;
        case 0x192c8cu: goto label_192c8c;
        case 0x192ca8u: goto label_192ca8;
        case 0x192cb0u: goto label_192cb0;
        case 0x192cd4u: goto label_192cd4;
        case 0x192cf4u: goto label_192cf4;
        case 0x192d04u: goto label_192d04;
        case 0x192d0cu: goto label_192d0c;
        case 0x192d1cu: goto label_192d1c;
        case 0x192d2cu: goto label_192d2c;
        case 0x192d40u: goto label_192d40;
        case 0x192d5cu: goto label_192d5c;
        case 0x192d7cu: goto label_192d7c;
        case 0x192d8cu: goto label_192d8c;
        case 0x192d9cu: goto label_192d9c;
        default: break;
    }

    ctx->pc = 0x192c18u;

    // 0x192c18: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x192c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x192c1c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x192c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x192c20: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x192c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x192c24: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x192c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x192c28: 0x24509a08  addiu       $s0, $v0, -0x65F8
    ctx->pc = 0x192c28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x192c2c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x192c2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c30: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x192c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x192c34: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x192c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c38: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x192c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x192c3c: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x192c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x192c40: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x192c40u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c44: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x192c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x192c48: 0xffb500b8  sd          $s5, 0xB8($sp)
    ctx->pc = 0x192c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
    // 0x192c4c: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x192c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x192c50: 0xffb700c8  sd          $s7, 0xC8($sp)
    ctx->pc = 0x192c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 23));
    // 0x192c54: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x192c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
    // 0x192c58: 0xc04785a  jal         func_11E168
    ctx->pc = 0x192C58u;
    SET_GPR_U32(ctx, 31, 0x192C60u);
    ctx->pc = 0x192C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192C58u;
    // 0x192c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E168u, 0x192C58u, 0x192C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192C60u;
label_192c60:
    // 0x192c60: 0x8e651004  lw          $a1, 0x1004($s3)
    ctx->pc = 0x192c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4100)));
    // 0x192c64: 0x50a00053  beql        $a1, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x192C64u;
    {
        const bool branch_taken_0x192c64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x192c64) {
            ctx->pc = 0x192C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x192C64u;
            // 0x192c68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x192DB4u;
            goto label_192db4;
        }
    }
    ctx->pc = 0x192C6Cu;
    // 0x192c6c: 0x8c5100b0  lw          $s1, 0xB0($v0)
    ctx->pc = 0x192c6cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x192c70: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x192c70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x192c74: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x192c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x192c78: 0x8c52020c  lw          $s2, 0x20C($v0)
    ctx->pc = 0x192c78u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x192c7c: 0x1240004d  beqz        $s2, . + 4 + (0x4D << 2)
    ctx->pc = 0x192C7Cu;
    {
        const bool branch_taken_0x192c7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x192C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192C7Cu;
        // 0x192c80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192c7c) {
            ctx->pc = 0x192DB4u;
            goto label_192db4;
        }
    }
    ctx->pc = 0x192C84u;
    // 0x192c84: 0xc047860  jal         func_11E180
    ctx->pc = 0x192C84u;
    SET_GPR_U32(ctx, 31, 0x192C8Cu);
    ctx->pc = 0x192C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192C84u;
    // 0x192c88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E180u, 0x192C84u, 0x192C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192C8Cu;
label_192c8c:
    // 0x192c8c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x192c8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c90: 0x8e621060  lw          $v0, 0x1060($s3)
    ctx->pc = 0x192c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4192)));
    // 0x192c94: 0x38420012  xori        $v0, $v0, 0x12
    ctx->pc = 0x192c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)18);
    // 0x192c98: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x192C98u;
    {
        const bool branch_taken_0x192c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x192C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192C98u;
        // 0x192c9c: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192c98) {
            ctx->pc = 0x192CBCu;
            goto label_192cbc;
        }
    }
    ctx->pc = 0x192CA0u;
    // 0x192ca0: 0xc061fbe  jal         func_187EF8
    ctx->pc = 0x192CA0u;
    SET_GPR_U32(ctx, 31, 0x192CA8u);
    ctx->pc = 0x192CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192CA0u;
    // 0x192ca4: 0x8e640fe4  lw          $a0, 0xFE4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187EF8u, 0x192CA0u, 0x192CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192CA8u;
label_192ca8:
    // 0x192ca8: 0xc0679e4  jal         func_19E790
    ctx->pc = 0x192CA8u;
    SET_GPR_U32(ctx, 31, 0x192CB0u);
    ctx->pc = 0x192CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192CA8u;
    // 0x192cac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E790u, 0x192CA8u, 0x192CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192CB0u;
label_192cb0:
    // 0x192cb0: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x192CB0u;
    {
        const bool branch_taken_0x192cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x192CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192CB0u;
        // 0x192cb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192cb0) {
            ctx->pc = 0x192D14u;
            goto label_192d14;
        }
    }
    ctx->pc = 0x192CB8u;
    // 0x192cb8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x192cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_192cbc:
    // 0x192cbc: 0x3c070049  lui         $a3, 0x49
    ctx->pc = 0x192cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)73 << 16));
    // 0x192cc0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x192cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192cc4: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x192cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x192cc8: 0x24e78738  addiu       $a3, $a3, -0x78C8
    ctx->pc = 0x192cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936376));
    // 0x192ccc: 0xc04ae84  jal         func_12BA10
    ctx->pc = 0x192CCCu;
    SET_GPR_U32(ctx, 31, 0x192CD4u);
    ctx->pc = 0x192CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192CCCu;
    // 0x192cd0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BA10u, 0x192CCCu, 0x192CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192CD4u;
label_192cd4:
    // 0x192cd4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x192cd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192cd8: 0x5220000e  beql        $s1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x192CD8u;
    {
        const bool branch_taken_0x192cd8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x192cd8) {
            ctx->pc = 0x192CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x192CD8u;
            // 0x192cdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x192D14u;
            goto label_192d14;
        }
    }
    ctx->pc = 0x192CE0u;
    // 0x192ce0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x192ce0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x192ce4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x192ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192ce8: 0x108083  sra         $s0, $s0, 2
    ctx->pc = 0x192ce8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 2));
    // 0x192cec: 0xc045e9c  jal         func_117A70
    ctx->pc = 0x192CECu;
    SET_GPR_U32(ctx, 31, 0x192CF4u);
    ctx->pc = 0x192CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192CECu;
    // 0x192cf0: 0x32100001  andi        $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A70u, 0x192CECu, 0x192CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192CF4u;
label_192cf4:
    // 0x192cf4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x192cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x192cf8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x192cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192cfc: 0xc042128  jal         func_1084A0
    ctx->pc = 0x192CFCu;
    SET_GPR_U32(ctx, 31, 0x192D04u);
    ctx->pc = 0x192D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192CFCu;
    // 0x192d00: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x192CFCu, 0x192D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192D04u;
label_192d04:
    // 0x192d04: 0x52000003  beql        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x192D04u;
    {
        const bool branch_taken_0x192d04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x192d04) {
            ctx->pc = 0x192D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x192D04u;
            // 0x192d08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x192D14u;
            goto label_192d14;
        }
    }
    ctx->pc = 0x192D0Cu;
label_192d0c:
    // 0x192d0c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x192D0Cu;
    {
        const bool branch_taken_0x192d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192D0Cu;
        // 0x192d10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192d0c) {
            ctx->pc = 0x192DB4u;
            goto label_192db4;
        }
    }
    ctx->pc = 0x192D14u;
label_192d14:
    // 0x192d14: 0xc044188  jal         func_110620
    ctx->pc = 0x192D14u;
    SET_GPR_U32(ctx, 31, 0x192D1Cu);
    ctx->pc = 0x192D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192D14u;
    // 0x192d18: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110620u, 0x192D14u, 0x192D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192D1Cu;
label_192d1c:
    // 0x192d1c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x192d1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d20: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x192d20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d24: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x192D24u;
    SET_GPR_U32(ctx, 31, 0x192D2Cu);
    ctx->pc = 0x192D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192D24u;
    // 0x192d28: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x192D24u, 0x192D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192D2Cu;
label_192d2c:
    // 0x192d2c: 0x12800020  beqz        $s4, . + 4 + (0x20 << 2)
    ctx->pc = 0x192D2Cu;
    {
        const bool branch_taken_0x192d2c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x192D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192D2Cu;
        // 0x192d30: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192d2c) {
            ctx->pc = 0x192DB0u;
            goto label_192db0;
        }
    }
    ctx->pc = 0x192D34u;
    // 0x192d34: 0x24170009  addiu       $s7, $zero, 0x9
    ctx->pc = 0x192d34u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x192d38: 0x24569c14  addiu       $s6, $v0, -0x63EC
    ctx->pc = 0x192d38u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
    // 0x192d3c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x192d3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_192d40:
    // 0x192d40: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x192d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x192d44: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x192d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192d4c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x192d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x192d50: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x192d50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192d54: 0xc044234  jal         func_1108D0
    ctx->pc = 0x192D54u;
    SET_GPR_U32(ctx, 31, 0x192D5Cu);
    ctx->pc = 0x192D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192D54u;
    // 0x192d58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1108D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1108D0u, 0x192D54u, 0x192D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192D5Cu;
label_192d5c:
    // 0x192d5c: 0x14570015  bne         $v0, $s7, . + 4 + (0x15 << 2)
    ctx->pc = 0x192D5Cu;
    {
        const bool branch_taken_0x192d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x192D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192D5Cu;
        // 0x192d60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192d5c) {
            ctx->pc = 0x192DB4u;
            goto label_192db4;
        }
    }
    ctx->pc = 0x192D64u;
    // 0x192d64: 0x8e631008  lw          $v1, 0x1008($s3)
    ctx->pc = 0x192d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4104)));
    // 0x192d68: 0x8e621004  lw          $v0, 0x1004($s3)
    ctx->pc = 0x192d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4100)));
    // 0x192d6c: 0x1062ffe7  beq         $v1, $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x192D6Cu;
    {
        const bool branch_taken_0x192d6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x192D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192D6Cu;
        // 0x192d70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192d6c) {
            ctx->pc = 0x192D0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_192d0c;
        }
    }
    ctx->pc = 0x192D74u;
    // 0x192d74: 0xc047866  jal         func_11E198
    ctx->pc = 0x192D74u;
    SET_GPR_U32(ctx, 31, 0x192D7Cu);
    ctx->pc = 0x192D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192D74u;
    // 0x192d78: 0x27c49a08  addiu       $a0, $fp, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E198u, 0x192D74u, 0x192D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192D7Cu;
label_192d7c:
    // 0x192d7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x192d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d80: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x192d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x192d84: 0xc0952e8  jal         func_254BA0
    ctx->pc = 0x192D84u;
    SET_GPR_U32(ctx, 31, 0x192D8Cu);
    ctx->pc = 0x192D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192D84u;
    // 0x192d88: 0x8c850fe4  lw          $a1, 0xFE4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254BA0u, 0x192D84u, 0x192D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192D8Cu;
label_192d8c:
    // 0x192d8c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x192D8Cu;
    {
        const bool branch_taken_0x192d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192d8c) {
            ctx->pc = 0x192D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x192D8Cu;
            // 0x192d90: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x192DA4u;
            goto label_192da4;
        }
    }
    ctx->pc = 0x192D94u;
    // 0x192d94: 0xc06542c  jal         func_1950B0
    ctx->pc = 0x192D94u;
    SET_GPR_U32(ctx, 31, 0x192D9Cu);
    ctx->pc = 0x192D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192D94u;
    // 0x192d98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1950B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1950B0u, 0x192D94u, 0x192D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192D9Cu;
label_192d9c:
    // 0x192d9c: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x192D9Cu;
    {
        const bool branch_taken_0x192d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x192DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192D9Cu;
        // 0x192da0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192d9c) {
            ctx->pc = 0x192D0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_192d0c;
        }
    }
    ctx->pc = 0x192DA4u;
label_192da4:
    // 0x192da4: 0x254102b  sltu        $v0, $s2, $s4
    ctx->pc = 0x192da4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x192da8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x192DA8u;
    {
        const bool branch_taken_0x192da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x192DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192DA8u;
        // 0x192dac: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192da8) {
            ctx->pc = 0x192D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_192d40;
        }
    }
    ctx->pc = 0x192DB0u;
label_192db0:
    // 0x192db0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x192db0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_192db4:
    // 0x192db4: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x192db4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x192db8: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x192db8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x192dbc: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x192dbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x192dc0: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x192dc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x192dc4: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x192dc4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x192dc8: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x192dc8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x192dcc: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x192dccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x192dd0: 0xdfb700c8  ld          $s7, 0xC8($sp)
    ctx->pc = 0x192dd0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x192dd4: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x192dd4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x192dd8: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x192dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x192ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x192DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192DDCu;
        // 0x192de0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192DE4u;
    // 0x192de4: 0x0  nop
    ctx->pc = 0x192de4u;
    // NOP
    ctx->pc = 0x192de8u;
}
