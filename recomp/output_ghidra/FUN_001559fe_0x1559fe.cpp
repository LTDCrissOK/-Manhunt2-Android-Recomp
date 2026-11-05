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

// Function: FUN_001559fe
// Address: 0x1559fe - 0x155b02
void FUN_001559fe_0x1559fe(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001559fe_0x1559fe");
#endif

    switch (ctx->pc) {
        case 0x1559feu: goto label_1559fe;
        case 0x155a02u: goto label_155a02;
        case 0x155a06u: goto label_155a06;
        case 0x155a0au: goto label_155a0a;
        case 0x155a0eu: goto label_155a0e;
        case 0x155a12u: goto label_155a12;
        case 0x155a16u: goto label_155a16;
        case 0x155a1au: goto label_155a1a;
        case 0x155a1eu: goto label_155a1e;
        case 0x155a22u: goto label_155a22;
        case 0x155a26u: goto label_155a26;
        case 0x155a2au: goto label_155a2a;
        case 0x155a2eu: goto label_155a2e;
        case 0x155a32u: goto label_155a32;
        case 0x155a36u: goto label_155a36;
        case 0x155a3au: goto label_155a3a;
        case 0x155a3eu: goto label_155a3e;
        case 0x155a42u: goto label_155a42;
        case 0x155a46u: goto label_155a46;
        case 0x155a4au: goto label_155a4a;
        case 0x155a4eu: goto label_155a4e;
        case 0x155a52u: goto label_155a52;
        case 0x155a56u: goto label_155a56;
        case 0x155a5au: goto label_155a5a;
        case 0x155a5eu: goto label_155a5e;
        case 0x155a62u: goto label_155a62;
        case 0x155a66u: goto label_155a66;
        case 0x155a6au: goto label_155a6a;
        case 0x155a6eu: goto label_155a6e;
        case 0x155a72u: goto label_155a72;
        case 0x155a76u: goto label_155a76;
        case 0x155a7au: goto label_155a7a;
        case 0x155a7eu: goto label_155a7e;
        case 0x155a82u: goto label_155a82;
        case 0x155a86u: goto label_155a86;
        case 0x155a8au: goto label_155a8a;
        case 0x155a8eu: goto label_155a8e;
        case 0x155a92u: goto label_155a92;
        case 0x155a96u: goto label_155a96;
        case 0x155a9au: goto label_155a9a;
        case 0x155a9eu: goto label_155a9e;
        case 0x155aa2u: goto label_155aa2;
        case 0x155aa6u: goto label_155aa6;
        case 0x155aaau: goto label_155aaa;
        case 0x155aaeu: goto label_155aae;
        case 0x155ab2u: goto label_155ab2;
        case 0x155ab6u: goto label_155ab6;
        case 0x155abau: goto label_155aba;
        case 0x155abeu: goto label_155abe;
        case 0x155ac2u: goto label_155ac2;
        case 0x155ac6u: goto label_155ac6;
        case 0x155acau: goto label_155aca;
        case 0x155aceu: goto label_155ace;
        case 0x155ad2u: goto label_155ad2;
        case 0x155ad6u: goto label_155ad6;
        case 0x155adau: goto label_155ada;
        case 0x155adeu: goto label_155ade;
        case 0x155ae2u: goto label_155ae2;
        case 0x155ae6u: goto label_155ae6;
        case 0x155aeau: goto label_155aea;
        case 0x155aeeu: goto label_155aee;
        case 0x155af2u: goto label_155af2;
        case 0x155af6u: goto label_155af6;
        case 0x155afau: goto label_155afa;
        case 0x155afeu: goto label_155afe;
        default: break;
    }

    ctx->pc = 0x1559feu;

label_1559fe:
    // 0x1559fe: 0x18420440  .word       0x18420440                   # blez        $v0, . + 4 + (0x440 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
label_155a02:
    if (ctx->pc == 0x155A02u) {
        ctx->pc = 0x155A02u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1559FEu;
        // 0x155a02: 0x8000002  j           func_000008 (Delay Slot)
        // J 0x8 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x155A06u;
        goto label_155a06;
    }
    ctx->pc = 0x1559FEu;
    {
        const bool branch_taken_0x1559fe = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x155A02u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1559FEu;
        // 0x155a02: 0x8000002  j           func_000008 (Delay Slot)
        // J 0x8 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x1559fe) {
            ctx->pc = 0x156B02u;
            return;
        }
    }
    ctx->pc = 0x155A06u;
label_155a06:
    // 0x155a06: 0x4482  srl         $t0, $zero, 18
    ctx->pc = 0x155a06u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 0), 18));
label_155a0a:
    // 0x155a0a: 0x8600000  j           func_1800000
label_155a0e:
    if (ctx->pc == 0x155A0Eu) {
        ctx->pc = 0x155A0Eu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A0Au;
        // 0x155a0e: 0x74680  sll         $t0, $a3, 26 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155A12u;
        goto label_155a12;
    }
    ctx->pc = 0x155A0Au;
    ctx->pc = 0x155A0Eu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155A0Au;
    // 0x155a0e: 0x74680  sll         $t0, $a3, 26 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1800000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1800000u, 0x155A0Au, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x155A12u;
label_155a12:
    // 0x155a12: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x155a12u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_155a16:
    // 0x155a16: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x155a16u;
    
label_155a1a:
    // 0x155a1a: 0x10253042  beq         $at, $a1, . + 4 + (0x3042 << 2)
label_155a1e:
    if (ctx->pc == 0x155A1Eu) {
        ctx->pc = 0x155A1Eu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A1Au;
        // 0x155a1e: 0x8000043  j           func_00010C (Delay Slot)
        // J 0x10C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x155A22u;
        goto label_155a22;
    }
    ctx->pc = 0x155A1Au;
    {
        const bool branch_taken_0x155a1a = (GPR_U64(ctx, 1) == GPR_U64(ctx, 5));
        ctx->pc = 0x155A1Eu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A1Au;
        // 0x155a1e: 0x8000043  j           func_00010C (Delay Slot)
        // J 0x10C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x155a1a) {
            ctx->pc = 0x161B26u;
            return;
        }
    }
    ctx->pc = 0x155A22u;
label_155a22:
    // 0x155a22: 0x4482  srl         $t0, $zero, 18
    ctx->pc = 0x155a22u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 0), 18));
label_155a26:
    // 0x155a26: 0x8600000  j           func_1800000
label_155a2a:
    if (ctx->pc == 0x155A2Au) {
        ctx->pc = 0x155A2Au;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A26u;
        // 0x155a2a: 0x8404680  j           func_1011A00 (Delay Slot)
        // J 0x1011A00 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x155A2Eu;
        goto label_155a2e;
    }
    ctx->pc = 0x155A26u;
    ctx->pc = 0x155A2Au;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155A26u;
    // 0x155a2a: 0x8404680  j           func_1011A00 (Delay Slot)
    // J 0x1011A00 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x1800000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1800000u, 0x155A26u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x155A2Eu;
label_155a2e:
    // 0x155a2e: 0x3f804601  .word       0x3F804601                   # lui         $zero, 0x4601 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x155a2eu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)17921 << 16));
label_155a32:
    // 0x155a32: 0x3c01  .word       0x00003C01                   # INVALID     $zero, $zero, 0x3C01 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x155a32u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x155A32 raw=0x00003C01");
label_155a36:
    // 0x155a36: 0x4481  .word       0x00004481                   # INVALID     $zero, $zero, 0x4481 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x155a36u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x155A36 raw=0x00004481");
label_155a3a:
    // 0x155a3a: 0x8340000  j           func_D00000
label_155a3e:
    if (ctx->pc == 0x155A3Eu) {
        ctx->pc = 0x155A3Eu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A3Au;
        // 0x155a3e: 0x4600  sll         $t0, $zero, 24 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155A42u;
        goto label_155a42;
    }
    ctx->pc = 0x155A3Au;
    ctx->pc = 0x155A3Eu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155A3Au;
    // 0x155a3e: 0x4600  sll         $t0, $zero, 24 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0xD00000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xD00000u, 0x155A3Au, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x155A42u;
label_155a42:
    // 0x155a42: 0x30000  sll         $zero, $v1, 0
    ctx->pc = 0x155a42u;
    
label_155a46:
    // 0x155a46: 0x46c4502  teqi        $v1, 0x4502
    ctx->pc = 0x155a46u;
    if (GPR_S64(ctx, 3) == (int64_t)(int32_t)17666) { runtime->handleTrap(rdram, ctx); }
label_155a4a:
    // 0x155a4a: 0x1490e3  .word       0x001490E3                   # negu        $s2, $s4 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x155a4au;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
label_155a4e:
    // 0x155a4e: 0x102d1000  beq         $at, $t5, . + 4 + (0x1000 << 2)
label_155a52:
    if (ctx->pc == 0x155A52u) {
        ctx->pc = 0x155A52u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A4Eu;
        // 0x155a52: 0x490000  .word       0x00490000                   # sll         $zero, $t1, 0 # 00400000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->in_delay_slot = false;
        ctx->pc = 0x155A56u;
        goto label_155a56;
    }
    ctx->pc = 0x155A4Eu;
    {
        const bool branch_taken_0x155a4e = (GPR_U64(ctx, 1) == GPR_U64(ctx, 13));
        ctx->pc = 0x155A52u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A4Eu;
        // 0x155a52: 0x490000  .word       0x00490000                   # sll         $zero, $t1, 0 # 00400000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->in_delay_slot = false;
        if (branch_taken_0x155a4e) {
            ctx->pc = 0x159A52u;
            return;
        }
    }
    ctx->pc = 0x155A56u;
label_155a56:
    // 0x155a56: 0x43c04  .word       0x00043C04                   # sllv        $a3, $a0, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x155a56u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 0) & 0x1F));
label_155a5a:
    // 0x155a5a: 0x9a088ce5  lwr         $t0, -0x731B($s0)
    ctx->pc = 0x155a5au;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4294937829); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
label_155a5e:
    // 0x155a5e: 0x18802484  blez        $a0, . + 4 + (0x2484 << 2)
label_155a62:
    if (ctx->pc == 0x155A62u) {
        ctx->pc = 0x155A62u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A5Eu;
        // 0x155a62: 0x18210003  .word       0x18210003                   # blez        $at, . + 4 + (0x3 << 2) # 00010000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x155A62 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x155A66u;
        goto label_155a66;
    }
    ctx->pc = 0x155A5Eu;
    {
        const bool branch_taken_0x155a5e = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x155A62u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A5Eu;
        // 0x155a62: 0x18210003  .word       0x18210003                   # blez        $at, . + 4 + (0x3 << 2) # 00010000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x155A62 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x155a5e) {
            ctx->pc = 0x15EC72u;
            return;
        }
    }
    ctx->pc = 0x155A66u;
label_155a66:
    // 0x155a66: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x155a66u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_155a6a:
    // 0x155a6a: 0x10808c62  beqz        $a0, . + 4 + (-0x739E << 2)
label_155a6e:
    if (ctx->pc == 0x155A6Eu) {
        ctx->pc = 0x155A6Eu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A6Au;
        // 0x155a6e: 0x20210002  addi        $at, $at, 0x2 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)2, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x155A72u;
        goto label_155a72;
    }
    ctx->pc = 0x155A6Au;
    {
        const bool branch_taken_0x155a6a = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x155A6Eu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A6Au;
        // 0x155a6e: 0x20210002  addi        $at, $at, 0x2 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)2, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x155a6a) {
            ctx->pc = 0x138BF6u;
            return;
        }
    }
    ctx->pc = 0x155A72u;
label_155a72:
    // 0x155a72: 0x1080082  .word       0x01080082                   # srl         $zero, $t0, 2 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x155a72u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 8), 2));
label_155a76:
    // 0x155a76: 0xbc8c83  .word       0x00BC8C83                   # sra         $s1, $gp, 18 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x155a76u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 28), 18));
label_155a7a:
    // 0x155a7a: 0xf8c62  .word       0x000F8C62                   # neg         $s1, $t7 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x155a7au;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 15), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
label_155a7e:
    // 0x155a7e: 0xf3042  srl         $a2, $t7, 1
    ctx->pc = 0x155a7eu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 15), 1));
label_155a82:
    // 0x155a82: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x155a82u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_155a86:
    // 0x155a86: 0x302d1440  andi        $t5, $at, 0x1440
    ctx->pc = 0x155a86u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)5184);
label_155a8a:
    // 0x155a8a: 0x107c0000  beq         $v1, $gp, . + 4 + (0x0 << 2)
label_155a8e:
    if (ctx->pc == 0x155A8Eu) {
        ctx->pc = 0x155A8Eu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A8Au;
        // 0x155a8e: 0x302b8c62  andi        $t3, $at, 0x8C62 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)35938);
        ctx->in_delay_slot = false;
        ctx->pc = 0x155A92u;
        goto label_155a92;
    }
    ctx->pc = 0x155A8Au;
    {
        const bool branch_taken_0x155a8a = (GPR_U64(ctx, 3) == GPR_U64(ctx, 28));
        ctx->pc = 0x155A8Eu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A8Au;
        // 0x155a8e: 0x302b8c62  andi        $t3, $at, 0x8C62 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)35938);
        ctx->in_delay_slot = false;
        if (branch_taken_0x155a8a) {
            ctx->pc = 0x155A8Eu;
            goto label_155a8e;
        }
    }
    ctx->pc = 0x155A92u;
label_155a92:
    // 0x155a92: 0x202d0002  addi        $t5, $at, 0x2
    ctx->pc = 0x155a92u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)2, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
label_155a96:
    // 0x155a96: 0xe45000e0  swc1        $f16, 0xE0($v0)
    ctx->pc = 0x155a96u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 224), bits); }
label_155a9a:
    // 0x155a9a: 0x282d0c04  slti        $t5, $at, 0xC04
    ctx->pc = 0x155a9au;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)3076) ? 1 : 0);
label_155a9e:
    // 0x155a9e: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x155a9eu;
    
label_155aa2:
    // 0x155aa2: 0x8dfbf  dsra32      $k1, $t0, 30
    ctx->pc = 0x155aa2u;
    SET_GPR_S64(ctx, 27, GPR_S64(ctx, 8) >> (32 + 30));
label_155aa6:
    // 0x155aa6: 0x1003e0  .word       0x001003E0                   # add         $zero, $zero, $s0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x155aa6u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_155aaa:
    // 0x155aaa: 0x27bd  .word       0x000027BD                   # INVALID     $zero, $zero, 0x27BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x155aaau;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x155AAA raw=0x000027BD");
label_155aae:
    // 0x155aae: 0xffe00000  sd          $zero, 0x0($ra)
    ctx->pc = 0x155aaeu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 0), GPR_U64(ctx, 0));
label_155ab2:
    // 0x155ab2: 0x4927bd  .word       0x004927BD                   # INVALID     $v0, $t1, 0x27BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x155ab2u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x155AB2 raw=0x004927BD");
label_155ab6:
    // 0x155ab6: 0x103c08  .word       0x00103C08                   # jr          $zero # 00103C00 <InstrIdType: CPU_SPECIAL>
label_155aba:
    if (ctx->pc == 0x155ABAu) {
        ctx->pc = 0x155ABAu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155AB6u;
        // 0x155aba: 0x9a08ffbf  lwr         $t0, -0x41($s0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4294967231); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x155ABEu;
        goto label_155abe;
    }
    ctx->pc = 0x155AB6u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x155ABAu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155AB6u;
        // 0x155aba: 0x9a08ffbf  lwr         $t0, -0x41($s0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4294967231); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155AB6u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x155ABEu;
label_155abe:
    // 0x155abe: 0x282d2508  slti        $t5, $at, 0x2508
    ctx->pc = 0x155abeu;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)9480) ? 1 : 0);
label_155ac2:
    // 0x155ac2: 0x302d03a0  andi        $t5, $at, 0x3A0
    ctx->pc = 0x155ac2u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)928);
label_155ac6:
    // 0x155ac6: 0x6640000  .word       0x06640000                   # INVALID     $s3, $a0, 0x0 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x155ac6u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x155AC6 raw=0x06640000");
label_155aca:
    // 0x155aca: 0x46c8c83  teqi        $v1, -0x737D
    ctx->pc = 0x155acau;
    if (GPR_S64(ctx, 3) == (int64_t)(int32_t)4294937731) { runtime->handleTrap(rdram, ctx); }
label_155ace:
    // 0x155ace: 0x1049082  .word       0x01049082                   # srl         $s2, $a0, 2 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x155aceu;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
label_155ad2:
    // 0x155ad2: 0x48c69  .word       0x00048C69                   # mtsa        $zero # 00048C40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x155ad2u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_155ad6:
    // 0x155ad6: 0x10808c87  beqz        $a0, . + 4 + (-0x7379 << 2)
label_155ada:
    if (ctx->pc == 0x155ADAu) {
        ctx->pc = 0x155ADAu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155AD6u;
        // 0x155ada: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155ADEu;
        goto label_155ade;
    }
    ctx->pc = 0x155AD6u;
    {
        const bool branch_taken_0x155ad6 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x155ADAu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155AD6u;
        // 0x155ada: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155ad6) {
            ctx->pc = 0x138CF6u;
            return;
        }
    }
    ctx->pc = 0x155ADEu;
label_155ade:
    // 0x155ade: 0x10218d24  beq         $at, $at, . + 4 + (-0x72DC << 2)
label_155ae2:
    if (ctx->pc == 0x155AE2u) {
        ctx->pc = 0x155AE2u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155ADEu;
        // 0x155ae2: 0x600047  .word       0x00600047                   # srav        $zero, $zero, $v1 # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155AE6u;
        goto label_155ae6;
    }
    ctx->pc = 0x155ADEu;
    {
        const bool branch_taken_0x155ade = (GPR_U64(ctx, 1) == GPR_U64(ctx, 1));
        ctx->pc = 0x155AE2u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155ADEu;
        // 0x155ae2: 0x600047  .word       0x00600047                   # srav        $zero, $zero, $v1 # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155ade) {
            ctx->pc = 0x138F72u;
            return;
        }
    }
    ctx->pc = 0x155AE6u;
label_155ae6:
    // 0x155ae6: 0x2487  .word       0x00002487                   # srav        $a0, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x155ae6u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_155aea:
    // 0x155aea: 0x608c43  .word       0x00608C43                   # sra         $s1, $zero, 17 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x155aeau;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 0), 17));
label_155aee:
    // 0x155aee: 0x8c481  .word       0x0008C481                   # INVALID     $zero, $t0, -0x3B7F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x155aeeu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x155AEE raw=0x0008C481");
label_155af2:
    // 0x155af2: 0x1880c4e2  blez        $a0, . + 4 + (-0x3B1E << 2)
label_155af6:
    if (ctx->pc == 0x155AF6u) {
        ctx->pc = 0x155AF6u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155AF2u;
        // 0x155af6: 0x40003  sra         $zero, $a0, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 4), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155AFAu;
        goto label_155afa;
    }
    ctx->pc = 0x155AF2u;
    {
        const bool branch_taken_0x155af2 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x155AF6u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155AF2u;
        // 0x155af6: 0x40003  sra         $zero, $a0, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 4), 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155af2) {
            ctx->pc = 0x146E7Eu;
            return;
        }
    }
    ctx->pc = 0x155AFAu;
label_155afa:
    // 0x155afa: 0x847c4e0  j           func_11F1380
label_155afe:
    if (ctx->pc == 0x155AFEu) {
        ctx->pc = 0x155AFEu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155AFAu;
        // 0x155afe: 0x10874600  beq         $a0, $a3, . + 4 + (0x4600 << 2) (Delay Slot)
        // Likely branch instruction at 0x155AFE - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x155B02u;
        goto label_fallthrough_0x155afa;
    }
    ctx->pc = 0x155AFAu;
    ctx->pc = 0x155AFEu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155AFAu;
    // 0x155afe: 0x10874600  beq         $a0, $a3, . + 4 + (0x4600 << 2) (Delay Slot)
    // Likely branch instruction at 0x155AFE - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F1380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1380u, 0x155AFAu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
label_fallthrough_0x155afa:
    ctx->pc = 0x155B02u;
}
