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

// Function: sub_0028CDA8
// Address: 0x28cda8 - 0x28d2d0
void sub_0028CDA8_0x28cda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CDA8_0x28cda8");
#endif

    switch (ctx->pc) {
        case 0x28ce58u: goto label_28ce58;
        case 0x28ce64u: goto label_28ce64;
        case 0x28ce7cu: goto label_28ce7c;
        case 0x28ceacu: goto label_28ceac;
        case 0x28cf4cu: goto label_28cf4c;
        case 0x28cfa8u: goto label_28cfa8;
        case 0x28d0e4u: goto label_28d0e4;
        case 0x28d11cu: goto label_28d11c;
        case 0x28d140u: goto label_28d140;
        case 0x28d148u: goto label_28d148;
        case 0x28d1e4u: goto label_28d1e4;
        case 0x28d250u: goto label_28d250;
        case 0x28d2a0u: goto label_28d2a0;
        default: break;
    }

    ctx->pc = 0x28cda8u;

    // 0x28cda8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28cda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x28cdac: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28cdacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28cdb0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x28cdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x28cdb4: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x28cdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x28cdb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28cdb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cdbc: 0x8c43bd50  lw          $v1, -0x42B0($v0)
    ctx->pc = 0x28cdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x28cdc0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x28cdc0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cdc4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x28cdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x28cdc8: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x28cdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x28cdcc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x28cdccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x28cdd0: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x28cdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x28cdd4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x28cdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x28cdd8: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x28cdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x28cddc: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x28cddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x28cde0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x28cde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x28cde4: 0x8c650418  lw          $a1, 0x418($v1)
    ctx->pc = 0x28cde4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1048)));
    // 0x28cde8: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x28CDE8u;
    {
        const bool branch_taken_0x28cde8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x28CDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CDE8u;
        // 0x28cdec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cde8) {
            ctx->pc = 0x28CDF4u;
            goto label_28cdf4;
        }
    }
    ctx->pc = 0x28CDF0u;
    // 0x28cdf0: 0x8c6411e4  lw          $a0, 0x11E4($v1)
    ctx->pc = 0x28cdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4580)));
label_28cdf4:
    // 0x28cdf4: 0x1090012a  beq         $a0, $s0, . + 4 + (0x12A << 2)
    ctx->pc = 0x28CDF4u;
    {
        const bool branch_taken_0x28cdf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x28CDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CDF4u;
        // 0x28cdf8: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cdf4) {
            ctx->pc = 0x28D2A0u;
            goto label_28d2a0;
        }
    }
    ctx->pc = 0x28CDFCu;
    // 0x28cdfc: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x28CDFCu;
    {
        const bool branch_taken_0x28cdfc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x28CE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CDFCu;
        // 0x28ce00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cdfc) {
            ctx->pc = 0x28CE08u;
            goto label_28ce08;
        }
    }
    ctx->pc = 0x28CE04u;
    // 0x28ce04: 0x8c6411e4  lw          $a0, 0x11E4($v1)
    ctx->pc = 0x28ce04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4580)));
label_28ce08:
    // 0x28ce08: 0x50900126  beql        $a0, $s0, . + 4 + (0x126 << 2)
    ctx->pc = 0x28CE08u;
    {
        const bool branch_taken_0x28ce08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x28ce08) {
            ctx->pc = 0x28CE0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CE08u;
            // 0x28ce0c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D2A4u;
            goto label_28d2a4;
        }
    }
    ctx->pc = 0x28CE10u;
    // 0x28ce10: 0x920201b8  lbu         $v0, 0x1B8($s0)
    ctx->pc = 0x28ce10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x28ce14: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x28CE14u;
    {
        const bool branch_taken_0x28ce14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE14u;
        // 0x28ce18: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ce14) {
            ctx->pc = 0x28CE5Cu;
            goto label_28ce5c;
        }
    }
    ctx->pc = 0x28CE1Cu;
    // 0x28ce1c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x28ce1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x28ce20: 0x8c4ba7d0  lw          $t3, -0x5830($v0)
    ctx->pc = 0x28ce20u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944720)));
    // 0x28ce24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ce24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ce28: 0x8c62a7e4  lw          $v0, -0x581C($v1)
    ctx->pc = 0x28ce28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FA7E4u));
    // 0x28ce2c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x28ce2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28ce30: 0x1750018  mult        $zero, $t3, $s5
    ctx->pc = 0x28ce30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x28ce34: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x28ce34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x28ce38: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x28ce38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x28ce3c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x28ce3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28ce40: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28ce40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28ce44: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x28ce44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28ce48: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28ce48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ce4c: 0x5812  mflo        $t3
    ctx->pc = 0x28ce4cu;
    SET_GPR_U64(ctx, 11, ctx->lo);
    // 0x28ce50: 0xc0a2ff4  jal         func_28BFD0
    ctx->pc = 0x28CE50u;
    SET_GPR_U32(ctx, 31, 0x28CE58u);
    ctx->pc = 0x28CE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CE50u;
    // 0x28ce54: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BFD0u, 0x28CE50u, 0x28CE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CE58u;
label_28ce58:
    // 0x28ce58: 0xa20001b8  sb          $zero, 0x1B8($s0)
    ctx->pc = 0x28ce58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 440), (uint8_t)GPR_U32(ctx, 0));
label_28ce5c:
    // 0x28ce5c: 0xc0a368a  jal         func_28DA28
    ctx->pc = 0x28CE5Cu;
    SET_GPR_U32(ctx, 31, 0x28CE64u);
    ctx->pc = 0x28CE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CE5Cu;
    // 0x28ce60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DA28u, 0x28CE5Cu, 0x28CE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CE64u;
label_28ce64:
    // 0x28ce64: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x28CE64u;
    {
        const bool branch_taken_0x28ce64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CE64u;
        // 0x28ce68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ce64) {
            ctx->pc = 0x28CEB4u;
            goto label_28ceb4;
        }
    }
    ctx->pc = 0x28CE6Cu;
    // 0x28ce6c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x28ce6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28ce70: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x28ce70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x28ce74: 0xc0a3698  jal         func_28DA60
    ctx->pc = 0x28CE74u;
    SET_GPR_U32(ctx, 31, 0x28CE7Cu);
    ctx->pc = 0x28CE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CE74u;
    // 0x28ce78: 0x27a70018  addiu       $a3, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DA60u, 0x28CE74u, 0x28CE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CE7Cu;
label_28ce7c:
    // 0x28ce7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ce80: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x28ce80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ce84: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x28ce84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x28ce88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ce88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ce8c: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x28ce8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28ce90: 0x2a0582d  daddu       $t3, $s5, $zero
    ctx->pc = 0x28ce90u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ce94: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x28ce94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x28ce98: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x28ce98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28ce9c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x28ce9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x28cea0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x28cea0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28cea4: 0xc0a2ff4  jal         func_28BFD0
    ctx->pc = 0x28CEA4u;
    SET_GPR_U32(ctx, 31, 0x28CEACu);
    ctx->pc = 0x28CEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CEA4u;
    // 0x28cea8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BFD0u, 0x28CEA4u, 0x28CEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CEACu;
label_28ceac:
    // 0x28ceac: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x28CEACu;
    {
        const bool branch_taken_0x28ceac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CEACu;
        // 0x28ceb0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ceac) {
            ctx->pc = 0x28D2A4u;
            goto label_28d2a4;
        }
    }
    ctx->pc = 0x28CEB4u;
label_28ceb4:
    // 0x28ceb4: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x28ceb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x28ceb8: 0x3082020f  andi        $v0, $a0, 0x20F
    ctx->pc = 0x28ceb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)527);
    // 0x28cebc: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x28cebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x28cec0: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x28CEC0u;
    {
        const bool branch_taken_0x28cec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28CEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CEC0u;
        // 0x28cec4: 0x38820181  xori        $v0, $a0, 0x181 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)385);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cec0) {
            ctx->pc = 0x28CF3Cu;
            goto label_28cf3c;
        }
    }
    ctx->pc = 0x28CEC8u;
    // 0x28cec8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28cec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28cecc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x28ceccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x28ced0: 0x2442a540  addiu       $v0, $v0, -0x5AC0
    ctx->pc = 0x28ced0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944064));
    // 0x28ced4: 0x8c64c9f0  lw          $a0, -0x3610($v1)
    ctx->pc = 0x28ced4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6BC9F0u));
    // 0x28ced8: 0x244201cc  addiu       $v0, $v0, 0x1CC
    ctx->pc = 0x28ced8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 460));
    // 0x28cedc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28cedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28cee0: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x28cee0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3FA71Cu));
    // 0x28cee4: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x28cee4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FA714u));
    // 0x28cee8: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x28CEE8u;
    {
        const bool branch_taken_0x28cee8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x28CEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CEE8u;
        // 0x28ceec: 0x8c46000c  lw          $a2, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cee8) {
            ctx->pc = 0x28CF1Cu;
            goto label_28cf1c;
        }
    }
    ctx->pc = 0x28CEF0u;
    // 0x28cef0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28cef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28cef4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x28cef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x28cef8: 0x8c4ba7d0  lw          $t3, -0x5830($v0)
    ctx->pc = 0x28cef8u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x3FA7D0u));
    // 0x28cefc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28cefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cf00: 0x8c69a7d4  lw          $t1, -0x582C($v1)
    ctx->pc = 0x28cf00u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x3FA7D4u));
    // 0x28cf04: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x28cf04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28cf08: 0x1750018  mult        $zero, $t3, $s5
    ctx->pc = 0x28cf08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x28cf0c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x28cf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x28cf10: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x28cf10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x28cf14: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x28CF14u;
    {
        const bool branch_taken_0x28cf14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF14u;
        // 0x28cf18: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf14) {
            ctx->pc = 0x28CF9Cu;
            goto label_28cf9c;
        }
    }
    ctx->pc = 0x28CF1Cu;
label_28cf1c:
    // 0x28cf1c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28cf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28cf20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28cf20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cf24: 0x8c49a7d4  lw          $t1, -0x582C($v0)
    ctx->pc = 0x28cf24u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x3FA7D4u));
    // 0x28cf28: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x28cf28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28cf2c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x28cf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x28cf30: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x28cf30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28cf34: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x28CF34u;
    {
        const bool branch_taken_0x28cf34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF34u;
        // 0x28cf38: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf34) {
            ctx->pc = 0x28D248u;
            goto label_28d248;
        }
    }
    ctx->pc = 0x28CF3Cu;
label_28cf3c:
    // 0x28cf3c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x28CF3Cu;
    {
        const bool branch_taken_0x28cf3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28CF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF3Cu;
        // 0x28cf40: 0x3082001f  andi        $v0, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf3c) {
            ctx->pc = 0x28CFB0u;
            goto label_28cfb0;
        }
    }
    ctx->pc = 0x28CF44u;
    // 0x28cf44: 0xc09d150  jal         func_274540
    ctx->pc = 0x28CF44u;
    SET_GPR_U32(ctx, 31, 0x28CF4Cu);
    ctx->pc = 0x274540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274540u, 0x28CF44u, 0x28CF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CF4Cu;
label_28cf4c:
    // 0x28cf4c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28CF4Cu;
    {
        const bool branch_taken_0x28cf4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF4Cu;
        // 0x28cf50: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf4c) {
            ctx->pc = 0x28CF64u;
            goto label_28cf64;
        }
    }
    ctx->pc = 0x28CF54u;
    // 0x28cf54: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x28cf54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28cf58: 0x2442a540  addiu       $v0, $v0, -0x5AC0
    ctx->pc = 0x28cf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944064));
    // 0x28cf5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28CF5Cu;
    {
        const bool branch_taken_0x28cf5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF5Cu;
        // 0x28cf60: 0x244200c8  addiu       $v0, $v0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf5c) {
            ctx->pc = 0x28CF70u;
            goto label_28cf70;
        }
    }
    ctx->pc = 0x28CF64u;
label_28cf64:
    // 0x28cf64: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x28cf64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28cf68: 0x2442a540  addiu       $v0, $v0, -0x5AC0
    ctx->pc = 0x28cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944064));
    // 0x28cf6c: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x28cf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
label_28cf70:
    // 0x28cf70: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x28cf70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x28cf74: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x28cf74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x28cf78: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x28cf78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x28cf7c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28cf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28cf80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28cf80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cf84: 0x8c4ba7d0  lw          $t3, -0x5830($v0)
    ctx->pc = 0x28cf84u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x3FA7D0u));
    // 0x28cf88: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x28cf88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28cf8c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x28cf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x28cf90: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x28cf90u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cf94: 0x1750018  mult        $zero, $t3, $s5
    ctx->pc = 0x28cf94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x28cf98: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x28cf98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_28cf9c:
    // 0x28cf9c: 0x5812  mflo        $t3
    ctx->pc = 0x28cf9cu;
    SET_GPR_U64(ctx, 11, ctx->lo);
    // 0x28cfa0: 0xc0a2ff4  jal         func_28BFD0
    ctx->pc = 0x28CFA0u;
    SET_GPR_U32(ctx, 31, 0x28CFA8u);
    ctx->pc = 0x28BFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BFD0u, 0x28CFA0u, 0x28CFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CFA8u;
label_28cfa8:
    // 0x28cfa8: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x28CFA8u;
    {
        const bool branch_taken_0x28cfa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CFA8u;
        // 0x28cfac: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cfa8) {
            ctx->pc = 0x28D2A4u;
            goto label_28d2a4;
        }
    }
    ctx->pc = 0x28CFB0u;
label_28cfb0:
    // 0x28cfb0: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x28cfb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
    // 0x28cfb4: 0x1440008d  bnez        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x28CFB4u;
    {
        const bool branch_taken_0x28cfb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28CFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CFB4u;
        // 0x28cfb8: 0x30828001  andi        $v0, $a0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cfb4) {
            ctx->pc = 0x28D1ECu;
            goto label_28d1ec;
        }
    }
    ctx->pc = 0x28CFBCu;
    // 0x28cfbc: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x28cfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28cfc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28cfc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28cfc4: 0x0  nop
    ctx->pc = 0x28cfc4u;
    // NOP
    // 0x28cfc8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x28cfc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28cfcc: 0x0  nop
    ctx->pc = 0x28cfccu;
    // NOP
    // 0x28cfd0: 0x45000076  bc1f        . + 4 + (0x76 << 2)
    ctx->pc = 0x28CFD0u;
    {
        const bool branch_taken_0x28cfd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28CFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CFD0u;
        // 0x28cfd4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cfd0) {
            ctx->pc = 0x28D1ACu;
            goto label_28d1ac;
        }
    }
    ctx->pc = 0x28CFD8u;
    // 0x28cfd8: 0x8e07107c  lw          $a3, 0x107C($s0)
    ctx->pc = 0x28cfd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4220)));
    // 0x28cfdc: 0x38e20004  xori        $v0, $a3, 0x4
    ctx->pc = 0x28cfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)4);
    // 0x28cfe0: 0x104000af  beqz        $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x28CFE0u;
    {
        const bool branch_taken_0x28cfe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CFE0u;
        // 0x28cfe4: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cfe0) {
            ctx->pc = 0x28D2A0u;
            goto label_28d2a0;
        }
    }
    ctx->pc = 0x28CFE8u;
    // 0x28cfe8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28cfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28cfec: 0x8e08036c  lw          $t0, 0x36C($s0)
    ctx->pc = 0x28cfecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x28cff0: 0x2445a540  addiu       $a1, $v0, -0x5AC0
    ctx->pc = 0x28cff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944064));
    // 0x28cff4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x28cff4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cff8: 0x24a3008c  addiu       $v1, $a1, 0x8C
    ctx->pc = 0x28cff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 140));
    // 0x28cffc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x28cffcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x28d000: 0x8c730010  lw          $s3, 0x10($v1)
    ctx->pc = 0x28d000u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x3FA5DCu));
    // 0x28d004: 0x241700ff  addiu       $s7, $zero, 0xFF
    ctx->pc = 0x28d004u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28d008: 0x8c720008  lw          $s2, 0x8($v1)
    ctx->pc = 0x28d008u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x3FA5D4u));
    // 0x28d00c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x28d00cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d010: 0x1041024  and         $v0, $t0, $a0
    ctx->pc = 0x28d010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x28d014: 0x10440053  beq         $v0, $a0, . + 4 + (0x53 << 2)
    ctx->pc = 0x28D014u;
    {
        const bool branch_taken_0x28d014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x28D018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D014u;
        // 0x28d018: 0x8c71000c  lw          $s1, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d014) {
            ctx->pc = 0x28D164u;
            goto label_28d164;
        }
    }
    ctx->pc = 0x28D01Cu;
    // 0x28d01c: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x28d01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x28d020: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x28d020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x28d024: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x28D024u;
    {
        const bool branch_taken_0x28d024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D024u;
        // 0x28d028: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d024) {
            ctx->pc = 0x28D058u;
            goto label_28d058;
        }
    }
    ctx->pc = 0x28D02Cu;
    // 0x28d02c: 0x8c43c9f0  lw          $v1, -0x3610($v0)
    ctx->pc = 0x28d02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953456)));
    // 0x28d030: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x28D030u;
    {
        const bool branch_taken_0x28d030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D030u;
        // 0x28d034: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d030) {
            ctx->pc = 0x28D164u;
            goto label_28d164;
        }
    }
    ctx->pc = 0x28D038u;
    // 0x28d038: 0x8c43a7dc  lw          $v1, -0x5824($v0)
    ctx->pc = 0x28d038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944732)));
    // 0x28d03c: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x28D03Cu;
    {
        const bool branch_taken_0x28d03c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D03Cu;
        // 0x28d040: 0x24a200dc  addiu       $v0, $a1, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d03c) {
            ctx->pc = 0x28D164u;
            goto label_28d164;
        }
    }
    ctx->pc = 0x28D044u;
    // 0x28d044: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x28d044u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d048: 0x8c530010  lw          $s3, 0x10($v0)
    ctx->pc = 0x28d048u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x28d04c: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x28d04cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x28d050: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x28D050u;
    {
        const bool branch_taken_0x28d050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D050u;
        // 0x28d054: 0x8c51000c  lw          $s1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d050) {
            ctx->pc = 0x28D164u;
            goto label_28d164;
        }
    }
    ctx->pc = 0x28D058u;
label_28d058:
    // 0x28d058: 0x31020010  andi        $v0, $t0, 0x10
    ctx->pc = 0x28d058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16);
    // 0x28d05c: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x28D05Cu;
    {
        const bool branch_taken_0x28d05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D05Cu;
        // 0x28d060: 0x24a20154  addiu       $v0, $a1, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d05c) {
            ctx->pc = 0x28D0BCu;
            goto label_28d0bc;
        }
    }
    ctx->pc = 0x28D064u;
    // 0x28d064: 0x8e020370  lw          $v0, 0x370($s0)
    ctx->pc = 0x28d064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
    // 0x28d068: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28d068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28d06c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x28D06Cu;
    {
        const bool branch_taken_0x28d06c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D06Cu;
        // 0x28d070: 0x24a20118  addiu       $v0, $a1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d06c) {
            ctx->pc = 0x28D0BCu;
            goto label_28d0bc;
        }
    }
    ctx->pc = 0x28D074u;
    // 0x28d074: 0x9202047d  lbu         $v0, 0x47D($s0)
    ctx->pc = 0x28d074u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1149)));
    // 0x28d078: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28D078u;
    {
        const bool branch_taken_0x28d078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D078u;
        // 0x28d07c: 0x24a2012c  addiu       $v0, $a1, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d078) {
            ctx->pc = 0x28D0BCu;
            goto label_28d0bc;
        }
    }
    ctx->pc = 0x28D080u;
    // 0x28d080: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D080u;
    {
        const bool branch_taken_0x28d080 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D080u;
        // 0x28d084: 0x38c20001  xori        $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d080) {
            ctx->pc = 0x28D090u;
            goto label_28d090;
        }
    }
    ctx->pc = 0x28D088u;
    // 0x28d088: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x28D088u;
    {
        const bool branch_taken_0x28d088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D088u;
        // 0x28d08c: 0x24a200a0  addiu       $v0, $a1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d088) {
            ctx->pc = 0x28D0BCu;
            goto label_28d0bc;
        }
    }
    ctx->pc = 0x28D090u;
label_28d090:
    // 0x28d090: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D090u;
    {
        const bool branch_taken_0x28d090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D090u;
        // 0x28d094: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d090) {
            ctx->pc = 0x28D0A0u;
            goto label_28d0a0;
        }
    }
    ctx->pc = 0x28D098u;
    // 0x28d098: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28D098u;
    {
        const bool branch_taken_0x28d098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D098u;
        // 0x28d09c: 0x24a200b4  addiu       $v0, $a1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d098) {
            ctx->pc = 0x28D0BCu;
            goto label_28d0bc;
        }
    }
    ctx->pc = 0x28D0A0u;
label_28d0a0:
    // 0x28d0a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D0A0u;
    {
        const bool branch_taken_0x28d0a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D0A0u;
        // 0x28d0a4: 0x38e20003  xori        $v0, $a3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d0a0) {
            ctx->pc = 0x28D0B0u;
            goto label_28d0b0;
        }
    }
    ctx->pc = 0x28D0A8u;
    // 0x28d0a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28D0A8u;
    {
        const bool branch_taken_0x28d0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D0A8u;
        // 0x28d0ac: 0x24a200c8  addiu       $v0, $a1, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d0a8) {
            ctx->pc = 0x28D0BCu;
            goto label_28d0bc;
        }
    }
    ctx->pc = 0x28D0B0u;
label_28d0b0:
    // 0x28d0b0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28D0B0u;
    {
        const bool branch_taken_0x28d0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D0B0u;
        // 0x28d0b4: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d0b0) {
            ctx->pc = 0x28D0D0u;
            goto label_28d0d0;
        }
    }
    ctx->pc = 0x28D0B8u;
    // 0x28d0b8: 0x24a200f0  addiu       $v0, $a1, 0xF0
    ctx->pc = 0x28d0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 240));
label_28d0bc:
    // 0x28d0bc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x28d0bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d0c0: 0x8c530010  lw          $s3, 0x10($v0)
    ctx->pc = 0x28d0c0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x28d0c4: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x28d0c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x28d0c8: 0x8c51000c  lw          $s1, 0xC($v0)
    ctx->pc = 0x28d0c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x28d0cc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x28d0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_28d0d0:
    // 0x28d0d0: 0x8c43c9f0  lw          $v1, -0x3610($v0)
    ctx->pc = 0x28d0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953456)));
    // 0x28d0d4: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x28D0D4u;
    {
        const bool branch_taken_0x28d0d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D0D4u;
        // 0x28d0d8: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d0d4) {
            ctx->pc = 0x28D108u;
            goto label_28d108;
        }
    }
    ctx->pc = 0x28D0DCu;
    // 0x28d0dc: 0xc095520  jal         func_255480
    ctx->pc = 0x28D0DCu;
    SET_GPR_U32(ctx, 31, 0x28D0E4u);
    ctx->pc = 0x28D0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D0DCu;
    // 0x28d0e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255480u, 0x28D0DCu, 0x28D0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D0E4u;
label_28d0e4:
    // 0x28d0e4: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x28d0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28d0e8: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x28d0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x28d0ec: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x28d0ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28d0f0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x28D0F0u;
    {
        const bool branch_taken_0x28d0f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d0f0) {
            ctx->pc = 0x28D0F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D0F0u;
            // 0x28d0f4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D0F8u;
            goto label_28d0f8;
        }
    }
    ctx->pc = 0x28D0F8u;
label_28d0f8:
    // 0x28d0f8: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x28d0f8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x28d0fc: 0x1012  mflo        $v0
    ctx->pc = 0x28d0fcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x28d100: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x28d100u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d104: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x28d104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_28d108:
    // 0x28d108: 0x8c43f14c  lw          $v1, -0xEB4($v0)
    ctx->pc = 0x28d108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963532)));
    // 0x28d10c: 0x1603000a  bne         $s0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x28D10Cu;
    {
        const bool branch_taken_0x28d10c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x28d10c) {
            ctx->pc = 0x28D138u;
            goto label_28d138;
        }
    }
    ctx->pc = 0x28D114u;
    // 0x28d114: 0xc089490  jal         func_225240
    ctx->pc = 0x28D114u;
    SET_GPR_U32(ctx, 31, 0x28D11Cu);
    ctx->pc = 0x28D118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D114u;
    // 0x28d118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225240u, 0x28D114u, 0x28D11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D11Cu;
label_28d11c:
    // 0x28d11c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28D11Cu;
    {
        const bool branch_taken_0x28d11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D11Cu;
        // 0x28d120: 0x26c2a540  addiu       $v0, $s6, -0x5AC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294944064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d11c) {
            ctx->pc = 0x28D138u;
            goto label_28d138;
        }
    }
    ctx->pc = 0x28D124u;
    // 0x28d124: 0x241700ff  addiu       $s7, $zero, 0xFF
    ctx->pc = 0x28d124u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28d128: 0x24420168  addiu       $v0, $v0, 0x168
    ctx->pc = 0x28d128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
    // 0x28d12c: 0x8c530010  lw          $s3, 0x10($v0)
    ctx->pc = 0x28d12cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x28d130: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x28d130u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x28d134: 0x8c51000c  lw          $s1, 0xC($v0)
    ctx->pc = 0x28d134u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_28d138:
    // 0x28d138: 0xc09506a  jal         func_2541A8
    ctx->pc = 0x28D138u;
    SET_GPR_U32(ctx, 31, 0x28D140u);
    ctx->pc = 0x28D13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D138u;
    // 0x28d13c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2541A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2541A8u, 0x28D138u, 0x28D140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D140u;
label_28d140:
    // 0x28d140: 0xc0a21a2  jal         func_288688
    ctx->pc = 0x28D140u;
    SET_GPR_U32(ctx, 31, 0x28D148u);
    ctx->pc = 0x28D144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D140u;
    // 0x28d144: 0x2b80b  movn        $s7, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288688u, 0x28D140u, 0x28D148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D148u;
label_28d148:
    // 0x28d148: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28d148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d14c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28d14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28d150: 0x8c43a7c8  lw          $v1, -0x5838($v0)
    ctx->pc = 0x28d150u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FA7C8u));
    // 0x28d154: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D154u;
    {
        const bool branch_taken_0x28d154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d154) {
            ctx->pc = 0x28D164u;
            goto label_28d164;
        }
    }
    ctx->pc = 0x28D15Cu;
    // 0x28d15c: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x28D15Cu;
    {
        const bool branch_taken_0x28d15c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d15c) {
            ctx->pc = 0x28D160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D15Cu;
            // 0x28d160: 0x241700ff  addiu       $s7, $zero, 0xFF (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D164u;
            goto label_28d164;
        }
    }
    ctx->pc = 0x28D164u;
label_28d164:
    // 0x28d164: 0x1280004e  beqz        $s4, . + 4 + (0x4E << 2)
    ctx->pc = 0x28D164u;
    {
        const bool branch_taken_0x28d164 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D164u;
        // 0x28d168: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d164) {
            ctx->pc = 0x28D2A0u;
            goto label_28d2a0;
        }
    }
    ctx->pc = 0x28D16Cu;
    // 0x28d16c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x28d16cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x28d170: 0x8c4ba7d0  lw          $t3, -0x5830($v0)
    ctx->pc = 0x28d170u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944720)));
    // 0x28d174: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x28d174u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x28d178: 0x8c65a7e4  lw          $a1, -0x581C($v1)
    ctx->pc = 0x28d178u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FA7E4u));
    // 0x28d17c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28d17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28d180: 0x1750018  mult        $zero, $t3, $s5
    ctx->pc = 0x28d180u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x28d184: 0x8c89a7d8  lw          $t1, -0x5828($a0)
    ctx->pc = 0x28d184u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294944728)));
    // 0x28d188: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x28d188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x28d18c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28d18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d190: 0x8c4aa7e0  lw          $t2, -0x5820($v0)
    ctx->pc = 0x28d190u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944736)));
    // 0x28d194: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28d194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d198: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x28d198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d19c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x28d19cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d1a0: 0x5812  mflo        $t3
    ctx->pc = 0x28d1a0u;
    SET_GPR_U64(ctx, 11, ctx->lo);
    // 0x28d1a4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x28D1A4u;
    {
        const bool branch_taken_0x28d1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D1A4u;
        // 0x28d1a8: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d1a4) {
            ctx->pc = 0x28D1DCu;
            goto label_28d1dc;
        }
    }
    ctx->pc = 0x28D1ACu;
label_28d1ac:
    // 0x28d1ac: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x28d1acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x28d1b0: 0x2442a540  addiu       $v0, $v0, -0x5AC0
    ctx->pc = 0x28d1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944064));
    // 0x28d1b4: 0x8c69a7d8  lw          $t1, -0x5828($v1)
    ctx->pc = 0x28d1b4u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x3FA7D8u));
    // 0x28d1b8: 0x24420104  addiu       $v0, $v0, 0x104
    ctx->pc = 0x28d1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 260));
    // 0x28d1bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28d1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d1c0: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x28d1c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x28d1c4: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x28d1c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28d1c8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x28d1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x28d1cc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x28d1ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d1d0: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x28d1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x28d1d4: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x28d1d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d1d8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x28d1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_28d1dc:
    // 0x28d1dc: 0xc0a2ff4  jal         func_28BFD0
    ctx->pc = 0x28D1DCu;
    SET_GPR_U32(ctx, 31, 0x28D1E4u);
    ctx->pc = 0x28D1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D1DCu;
    // 0x28d1e0: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BFD0u, 0x28D1DCu, 0x28D1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D1E4u;
label_28d1e4:
    // 0x28d1e4: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x28D1E4u;
    {
        const bool branch_taken_0x28d1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D1E4u;
        // 0x28d1e8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d1e4) {
            ctx->pc = 0x28D2A4u;
            goto label_28d2a4;
        }
    }
    ctx->pc = 0x28D1ECu;
label_28d1ec:
    // 0x28d1ec: 0x38428001  xori        $v0, $v0, 0x8001
    ctx->pc = 0x28d1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)32769);
    // 0x28d1f0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28D1F0u;
    {
        const bool branch_taken_0x28d1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D1F0u;
        // 0x28d1f4: 0x3c020006  lui         $v0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d1f0) {
            ctx->pc = 0x28D218u;
            goto label_28d218;
        }
    }
    ctx->pc = 0x28D1F8u;
    // 0x28d1f8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28d1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28d1fc: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x28d1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x28d200: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D200u;
    {
        const bool branch_taken_0x28d200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28D204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D200u;
        // 0x28d204: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d200) {
            ctx->pc = 0x28D218u;
            goto label_28d218;
        }
    }
    ctx->pc = 0x28D208u;
    // 0x28d208: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28d208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28d20c: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x28d20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x28d210: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x28D210u;
    {
        const bool branch_taken_0x28d210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28d210) {
            ctx->pc = 0x28D258u;
            goto label_28d258;
        }
    }
    ctx->pc = 0x28D218u;
label_28d218:
    // 0x28d218: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28d218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28d21c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x28d21cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x28d220: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x28d220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x28d224: 0x2442a540  addiu       $v0, $v0, -0x5AC0
    ctx->pc = 0x28d224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944064));
    // 0x28d228: 0x2442017c  addiu       $v0, $v0, 0x17C
    ctx->pc = 0x28d228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 380));
    // 0x28d22c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28d22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d230: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x28d230u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3FA6CCu));
    // 0x28d234: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x28d234u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28d238: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x28d238u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FA6C4u));
    // 0x28d23c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x28d23cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d240: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x28d240u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3FA6C8u));
    // 0x28d244: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x28d244u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28d248:
    // 0x28d248: 0xc0a2ff4  jal         func_28BFD0
    ctx->pc = 0x28D248u;
    SET_GPR_U32(ctx, 31, 0x28D250u);
    ctx->pc = 0x28D24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D248u;
    // 0x28d24c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BFD0u, 0x28D248u, 0x28D250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D250u;
label_28d250:
    // 0x28d250: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x28D250u;
    {
        const bool branch_taken_0x28d250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D250u;
        // 0x28d254: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d250) {
            ctx->pc = 0x28D2A4u;
            goto label_28d2a4;
        }
    }
    ctx->pc = 0x28D258u;
label_28d258:
    // 0x28d258: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28d258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28d25c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28d25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28d260: 0x54820010  bnel        $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28D260u;
    {
        const bool branch_taken_0x28d260 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x28d260) {
            ctx->pc = 0x28D264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D260u;
            // 0x28d264: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D2A4u;
            goto label_28d2a4;
        }
    }
    ctx->pc = 0x28D268u;
    // 0x28d268: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28d268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28d26c: 0x92080220  lbu         $t0, 0x220($s0)
    ctx->pc = 0x28d26cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x28d270: 0x2442a540  addiu       $v0, $v0, -0x5AC0
    ctx->pc = 0x28d270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944064));
    // 0x28d274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28d274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d278: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x28d278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x28d27c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x28d27cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d280: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x28d280u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3FA690u));
    // 0x28d284: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x28d284u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d288: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x28d288u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FA688u));
    // 0x28d28c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x28d28cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d290: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x28d290u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3FA68Cu));
    // 0x28d294: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x28d294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x28d298: 0xc0a2ff4  jal         func_28BFD0
    ctx->pc = 0x28D298u;
    SET_GPR_U32(ctx, 31, 0x28D2A0u);
    ctx->pc = 0x28D29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D298u;
    // 0x28d29c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BFD0u, 0x28D298u, 0x28D2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D2A0u;
label_28d2a0:
    // 0x28d2a0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x28d2a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_28d2a4:
    // 0x28d2a4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x28d2a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x28d2a8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x28d2a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28d2ac: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x28d2acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x28d2b0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x28d2b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28d2b4: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x28d2b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x28d2b8: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x28d2b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28d2bc: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x28d2bcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x28d2c0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x28d2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28d2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x28D2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D2C4u;
        // 0x28d2c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D2C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D2CCu;
    // 0x28d2cc: 0x0  nop
    ctx->pc = 0x28d2ccu;
    // NOP
    ctx->pc = 0x28d2d0u;
}
