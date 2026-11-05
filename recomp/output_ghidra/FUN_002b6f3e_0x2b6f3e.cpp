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

// Function: FUN_002b6f3e
// Address: 0x2b6f3e - 0x2b6fec
void FUN_002b6f3e_0x2b6f3e(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002b6f3e_0x2b6f3e");
#endif

    ctx->pc = 0x2b6f3eu;

    // 0x2b6f3e: 0x492402  .word       0x00492402                   # srl         $a0, $t1, 16 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6f3eu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x2b6f42: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x2b6f42u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    // 0x2b6f46: 0x5ae04  .word       0x0005AE04                   # sllv        $s5, $a1, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6f46u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 0) & 0x1F));
    // 0x2b6f4a: 0x5782404  mtsab       $t3, 0x2404
    ctx->pc = 0x2b6f4au;
    ctx->sa = ((GPR_U32(ctx, 11) ^ (uint32_t)9220) & 0xF) << 3;
    // 0x2b6f4e: 0x88c43  sra         $s1, $t0, 17
    ctx->pc = 0x2b6f4eu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 8), 17));
    // 0x2b6f52: 0x202d1464  addi        $t5, $at, 0x1464
    ctx->pc = 0x2b6f52u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)5220, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
    // 0x2b6f56: 0x200200  .word       0x00200200                   # sll         $zero, $zero, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6f56u;
    
    // 0x2b6f5a: 0xd6cc2405  ldc1        $f12, 0x2405($s6)
    ctx->pc = 0x2b6f5au;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x2B6F5A raw=0xD6CC2405");
    // 0x2b6f5e: 0x302d0c0a  andi        $t5, $at, 0xC0A
    ctx->pc = 0x2b6f5eu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)3082);
    // 0x2b6f62: 0x290000  .word       0x00290000                   # sll         $zero, $t1, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6f62u;
    
    // 0x2b6f66: 0x292403  .word       0x00292403                   # sra         $a0, $t1, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6f66u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 9), 16));
    // 0x2b6f6a: 0x3e2402  .word       0x003E2402                   # srl         $a0, $fp, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6f6au;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 30), 16));
    // 0x2b6f6e: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x2b6f6eu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    // 0x2b6f72: 0x6100ae03  daddi       $zero, $t0, -0x51FD
    ctx->pc = 0x2b6f72u;
    { int64_t src = (int64_t)GPR_S64(ctx, 8); int64_t imm = (int64_t)(int32_t)4294946307; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
    // 0x2b6f76: 0xc07  .word       0x00000C07                   # srav        $at, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6f76u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x2b6f7a: 0x60000  sll         $zero, $a2, 0
    ctx->pc = 0x2b6f7au;
    
    // 0x2b6f7e: 0x18420440  .word       0x18420440                   # blez        $v0, . + 4 + (0x440 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2B6F7Eu;
    {
        const bool branch_taken_0x2b6f7e = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B6F82u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F7Eu;
        // 0x2b6f82: 0x8000002  j           func_000008 (Delay Slot)
        // J 0x8 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f7e) {
            ctx->pc = 0x2B8082u;
            return;
        }
    }
    ctx->pc = 0x2B6F86u;
    // 0x2b6f86: 0x4482  srl         $t0, $zero, 18
    ctx->pc = 0x2b6f86u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 0), 18));
    // 0x2b6f8a: 0x8600000  j           func_1800000
    ctx->pc = 0x2B6F8Au;
    ctx->pc = 0x2B6F8Eu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6F8Au;
    // 0x2b6f8e: 0x74680  sll         $t0, $a3, 26 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1800000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1800000u, 0x2B6F8Au, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B6F92u;
    // 0x2b6f92: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x2b6f92u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    // 0x2b6f96: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x2b6f96u;
    
    // 0x2b6f9a: 0x10253042  beq         $at, $a1, . + 4 + (0x3042 << 2)
    ctx->pc = 0x2B6F9Au;
    {
        const bool branch_taken_0x2b6f9a = (GPR_U64(ctx, 1) == GPR_U64(ctx, 5));
        ctx->pc = 0x2B6F9Eu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F9Au;
        // 0x2b6f9e: 0x8000043  j           func_00010C (Delay Slot)
        // J 0x10C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f9a) {
            ctx->pc = 0x2C30A6u;
            return;
        }
    }
    ctx->pc = 0x2B6FA2u;
    // 0x2b6fa2: 0x4482  srl         $t0, $zero, 18
    ctx->pc = 0x2b6fa2u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 0), 18));
    // 0x2b6fa6: 0x8600000  j           func_1800000
    ctx->pc = 0x2B6FA6u;
    ctx->pc = 0x2B6FAAu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6FA6u;
    // 0x2b6faa: 0x8404680  j           func_1011A00 (Delay Slot)
    // J 0x1011A00 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x1800000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1800000u, 0x2B6FA6u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B6FAEu;
    // 0x2b6fae: 0x3a834601  xori        $v1, $s4, 0x4601
    ctx->pc = 0x2b6faeu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)17921);
    // 0x2b6fb2: 0x126f3c01  beq         $s3, $t7, . + 4 + (0x3C01 << 2)
    ctx->pc = 0x2B6FB2u;
    {
        const bool branch_taken_0x2b6fb2 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 15));
        ctx->pc = 0x2B6FB6u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6FB2u;
        // 0x2b6fb6: 0x3421  .word       0x00003421                   # addu        $a2, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6fb2) {
            ctx->pc = 0x2C5FBAu;
            return;
        }
    }
    ctx->pc = 0x2B6FBAu;
    // 0x2b6fba: 0x202d4481  addi        $t5, $at, 0x4481
    ctx->pc = 0x2b6fbau;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)17537, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
    // 0x2b6fbe: 0x190200  sll         $zero, $t9, 8
    ctx->pc = 0x2b6fbeu;
    
    // 0x2b6fc2: 0x8022405  j           func_089014
    ctx->pc = 0x2B6FC2u;
    ctx->pc = 0x2B6FC6u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6FC2u;
    // 0x2b6fc6: 0x644600  .word       0x00644600                   # sll         $t0, $a0, 24 # 00600000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x89014u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x89014u, 0x2B6FC2u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B6FCAu;
    // 0x2b6fca: 0x59004600  blezl       $t0, . + 4 + (0x4600 << 2)
    ctx->pc = 0x2B6FCAu;
    {
        const bool branch_taken_0x2b6fca = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x2b6fca) {
            ctx->pc = 0x2B6FCEu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6FCAu;
            // 0x2b6fce: 0xd6cce601  ldc1        $f12, -0x19FF($s6) (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x35 at 0x2B6FCE raw=0xD6CCE601");
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C87CEu;
            return;
        }
    }
    ctx->pc = 0x2B6FD2u;
    // 0x2b6fd2: 0x302d0c0a  andi        $t5, $at, 0xC0A
    ctx->pc = 0x2b6fd2u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)3082);
    // 0x2b6fd6: 0x220000  .word       0x00220000                   # sll         $zero, $v0, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6fd6u;
    
    // 0x2b6fda: 0x222403  .word       0x00222403                   # sra         $a0, $v0, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6fdau;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2b6fde: 0x212402  .word       0x00212402                   # srl         $a0, $at, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6fdeu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 1), 16));
    // 0x2b6fe2: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x2b6fe2u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    // 0x2b6fe6: 0x5ae03  sra         $s5, $a1, 24
    ctx->pc = 0x2b6fe6u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 5), 24));
    // 0x2b6fea: 0x61471  tgeu        $zero, $a2, 81
    ctx->pc = 0x2b6feau;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x2b6fecu;
}
