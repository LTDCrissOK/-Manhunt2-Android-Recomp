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

// Function: sub_002D1040
// Address: 0x2d1040 - 0x2d1250
void sub_002D1040_0x2d1040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1040_0x2d1040");
#endif

    switch (ctx->pc) {
        case 0x2d10fcu: goto label_2d10fc;
        case 0x2d1120u: goto label_2d1120;
        case 0x2d11a0u: goto label_2d11a0;
        case 0x2d11f0u: goto label_2d11f0;
        case 0x2d1218u: goto label_2d1218;
        default: break;
    }

    ctx->pc = 0x2d1040u;

    // 0x2d1040: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d1040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d1044: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2d1044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2d1048: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2d1048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2d104c: 0x249100b4  addiu       $s1, $a0, 0xB4
    ctx->pc = 0x2d104cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 180));
    // 0x2d1050: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2d1050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2d1054: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2d1054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2d1058: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2d1058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2d105c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x2d105cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x2d1060: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2d1060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2d1064: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x2d1064u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d1068: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x2d1068u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d106c: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x2d106cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d1070: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2d1070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2d1074: 0x10c2000f  beq         $a2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D1074u;
    {
        const bool branch_taken_0x2d1074 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D1078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1074u;
        // 0x2d1078: 0x3a0a02d  daddu       $s4, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1074) {
            ctx->pc = 0x2D10B4u;
            goto label_2d10b4;
        }
    }
    ctx->pc = 0x2D107Cu;
    // 0x2d107c: 0x50c0000a  beql        $a2, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2D107Cu;
    {
        const bool branch_taken_0x2d107c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d107c) {
            ctx->pc = 0x2D1080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D107Cu;
            // 0x2d1080: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D10A8u;
            goto label_2d10a8;
        }
    }
    ctx->pc = 0x2D1084u;
    // 0x2d1084: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x2d1084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d1088: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x2d1088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d108c: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x2d108cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2d1090: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x2d1090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2d1094: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x2d1094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d1098: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x2d1098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d109c: 0xb0c3000f  sdl         $v1, 0xF($a2)
    ctx->pc = 0x2d109cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d10a0: 0xb4c30008  sdr         $v1, 0x8($a2)
    ctx->pc = 0x2d10a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d10a4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2d10a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2d10a8:
    // 0x2d10a8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2d10a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2d10ac: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x2D10ACu;
    {
        const bool branch_taken_0x2d10ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D10B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D10ACu;
        // 0x2d10b0: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d10ac) {
            ctx->pc = 0x2D1228u;
            goto label_2d1228;
        }
    }
    ctx->pc = 0x2D10B4u;
label_2d10b4:
    // 0x2d10b4: 0x8c8300b4  lw          $v1, 0xB4($a0)
    ctx->pc = 0x2d10b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x2d10b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d10b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d10bc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2d10bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2d10c0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2d10c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d10c4: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x2d10c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x2d10c8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2d10c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d10cc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d10ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d10d0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2d10d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2d10d4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2d10d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2d10d8: 0xa2200b  movn        $a0, $a1, $v0
    ctx->pc = 0x2d10d8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x2d10dc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d10dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d10e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d10e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d10e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D10E4u;
    {
        const bool branch_taken_0x2d10e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D10E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D10E4u;
        // 0x2d10e8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d10e4) {
            ctx->pc = 0x2D1104u;
            goto label_2d1104;
        }
    }
    ctx->pc = 0x2D10ECu;
    // 0x2d10ec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2d10ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2d10f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d10f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d10f4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2D10F4u;
    SET_GPR_U32(ctx, 31, 0x2D10FCu);
    ctx->pc = 0x2D10F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D10F4u;
    // 0x2d10f8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2D10F4u, 0x2D10FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D10FCu;
label_2d10fc:
    // 0x2d10fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D10FCu;
    {
        const bool branch_taken_0x2d10fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D10FCu;
        // 0x2d1100: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d10fc) {
            ctx->pc = 0x2D1110u;
            goto label_2d1110;
        }
    }
    ctx->pc = 0x2D1104u;
label_2d1104:
    // 0x2d1104: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d1104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1108: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2d1108u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d110c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d110cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d1110:
    // 0x2d1110: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2d1110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d1114: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x2d1114u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1118: 0x1072000e  beq         $v1, $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x2D1118u;
    {
        const bool branch_taken_0x2d1118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x2D111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1118u;
        // 0x2d111c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1118) {
            ctx->pc = 0x2D1154u;
            goto label_2d1154;
        }
    }
    ctx->pc = 0x2D1120u;
label_2d1120:
    // 0x2d1120: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2D1120u;
    {
        const bool branch_taken_0x2d1120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1120) {
            ctx->pc = 0x2D1124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1120u;
            // 0x2d1124: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D114Cu;
            goto label_2d114c;
        }
    }
    ctx->pc = 0x2D1128u;
    // 0x2d1128: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x2d1128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2d112c: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x2d112cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2d1130: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x2d1130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2d1134: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x2d1134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2d1138: 0xb0460007  sdl         $a2, 0x7($v0)
    ctx->pc = 0x2d1138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d113c: 0xb4460000  sdr         $a2, 0x0($v0)
    ctx->pc = 0x2d113cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d1140: 0xb047000f  sdl         $a3, 0xF($v0)
    ctx->pc = 0x2d1140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d1144: 0xb4470008  sdr         $a3, 0x8($v0)
    ctx->pc = 0x2d1144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d1148: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2d1148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_2d114c:
    // 0x2d114c: 0x1472fff4  bne         $v1, $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x2D114Cu;
    {
        const bool branch_taken_0x2d114c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x2D1150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D114Cu;
        // 0x2d1150: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d114c) {
            ctx->pc = 0x2D1120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1120;
        }
    }
    ctx->pc = 0x2D1154u;
label_2d1154:
    // 0x2d1154: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d1154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1158: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2d1158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2d115c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d115cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1160: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D1160u;
    {
        const bool branch_taken_0x2d1160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d1160) {
            ctx->pc = 0x2D1198u;
            goto label_2d1198;
        }
    }
    ctx->pc = 0x2D1168u;
    // 0x2d1168: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2D1168u;
    {
        const bool branch_taken_0x2d1168 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1168) {
            ctx->pc = 0x2D116Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1168u;
            // 0x2d116c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D11D8u;
            goto label_2d11d8;
        }
    }
    ctx->pc = 0x2D1170u;
    // 0x2d1170: 0x6a860007  ldl         $a2, 0x7($s4)
    ctx->pc = 0x2d1170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2d1174: 0x6e860000  ldr         $a2, 0x0($s4)
    ctx->pc = 0x2d1174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2d1178: 0x6a87000f  ldl         $a3, 0xF($s4)
    ctx->pc = 0x2d1178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2d117c: 0x6e870008  ldr         $a3, 0x8($s4)
    ctx->pc = 0x2d117cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2d1180: 0xb2060007  sdl         $a2, 0x7($s0)
    ctx->pc = 0x2d1180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d1184: 0xb6060000  sdr         $a2, 0x0($s0)
    ctx->pc = 0x2d1184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d1188: 0xb207000f  sdl         $a3, 0xF($s0)
    ctx->pc = 0x2d1188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d118c: 0xb6070008  sdr         $a3, 0x8($s0)
    ctx->pc = 0x2d118cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d1190: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2D1190u;
    {
        const bool branch_taken_0x2d1190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1190u;
        // 0x2d1194: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1190) {
            ctx->pc = 0x2D11D8u;
            goto label_2d11d8;
        }
    }
    ctx->pc = 0x2D1198u;
label_2d1198:
    // 0x2d1198: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D1198u;
    {
        const bool branch_taken_0x2d1198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1198u;
        // 0x2d119c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1198) {
            ctx->pc = 0x2D11D0u;
            goto label_2d11d0;
        }
    }
    ctx->pc = 0x2D11A0u;
label_2d11a0:
    // 0x2d11a0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D11A0u;
    {
        const bool branch_taken_0x2d11a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D11A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D11A0u;
        // 0x2d11a4: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d11a0) {
            ctx->pc = 0x2D11C8u;
            goto label_2d11c8;
        }
    }
    ctx->pc = 0x2D11A8u;
    // 0x2d11a8: 0x6a840007  ldl         $a0, 0x7($s4)
    ctx->pc = 0x2d11a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2d11ac: 0x6e840000  ldr         $a0, 0x0($s4)
    ctx->pc = 0x2d11acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2d11b0: 0x6a85000f  ldl         $a1, 0xF($s4)
    ctx->pc = 0x2d11b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2d11b4: 0x6e850008  ldr         $a1, 0x8($s4)
    ctx->pc = 0x2d11b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2d11b8: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x2d11b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d11bc: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x2d11bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d11c0: 0xb045000f  sdl         $a1, 0xF($v0)
    ctx->pc = 0x2d11c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d11c4: 0xb4450008  sdr         $a1, 0x8($v0)
    ctx->pc = 0x2d11c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d11c8:
    // 0x2d11c8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2D11C8u;
    {
        const bool branch_taken_0x2d11c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D11CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D11C8u;
        // 0x2d11cc: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d11c8) {
            ctx->pc = 0x2D11A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d11a0;
        }
    }
    ctx->pc = 0x2D11D0u;
label_2d11d0:
    // 0x2d11d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d11d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d11d4: 0x0  nop
    ctx->pc = 0x2d11d4u;
    // NOP
label_2d11d8:
    // 0x2d11d8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d11d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d11dc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2d11dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d11e0: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D11E0u;
    {
        const bool branch_taken_0x2d11e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D11E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D11E0u;
        // 0x2d11e4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d11e0) {
            ctx->pc = 0x2D1208u;
            goto label_2d1208;
        }
    }
    ctx->pc = 0x2D11E8u;
    // 0x2d11e8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2d11e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2d11ec: 0x0  nop
    ctx->pc = 0x2d11ecu;
    // NOP
label_2d11f0:
    // 0x2d11f0: 0x0  nop
    ctx->pc = 0x2d11f0u;
    // NOP
    // 0x2d11f4: 0x0  nop
    ctx->pc = 0x2d11f4u;
    // NOP
    // 0x2d11f8: 0x0  nop
    ctx->pc = 0x2d11f8u;
    // NOP
    // 0x2d11fc: 0x0  nop
    ctx->pc = 0x2d11fcu;
    // NOP
    // 0x2d1200: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D1200u;
    {
        const bool branch_taken_0x2d1200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D1204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1200u;
        // 0x2d1204: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1200) {
            ctx->pc = 0x2D11F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d11f0;
        }
    }
    ctx->pc = 0x2D1208u;
label_2d1208:
    // 0x2d1208: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1208u;
    {
        const bool branch_taken_0x2d1208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1208u;
        // 0x2d120c: 0x2b31021  addu        $v0, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1208) {
            ctx->pc = 0x2D121Cu;
            goto label_2d121c;
        }
    }
    ctx->pc = 0x2D1210u;
    // 0x2d1210: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2D1210u;
    SET_GPR_U32(ctx, 31, 0x2D1218u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2D1210u, 0x2D1218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1218u;
label_2d1218:
    // 0x2d1218: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x2d1218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_2d121c:
    // 0x2d121c: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x2d121cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x2d1220: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2d1220u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2d1224: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x2d1224u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_2d1228:
    // 0x2d1228: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2d1228u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d122c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2d122cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1230: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2d1230u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d1234: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2d1234u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d1238: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2d1238u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d123c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2d123cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d1240: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2d1240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d1244: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1244u;
        // 0x2d1248: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D124Cu;
    // 0x2d124c: 0x0  nop
    ctx->pc = 0x2d124cu;
    // NOP
    ctx->pc = 0x2d1250u;
}
