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

// Function: entry_002b6916
// Address: 0x2b6916 - 0x2b6994
void entry_002b6916_0x2b6916(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b6916_0x2b6916");
#endif

    ctx->pc = 0x2b6916u;

    // 0x2b6916: 0x4014b1  tgeu        $v0, $zero, 82
    ctx->pc = 0x2b6916u;
    if (GPR_U64(ctx, 2) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x2b691a: 0x3c02  srl         $a3, $zero, 16
    ctx->pc = 0x2b691au;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 0), 16));
    // 0x2b691e: 0x248e03  .word       0x00248E03                   # sra         $s1, $a0, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b691eu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 4), 24));
    // 0x2b6922: 0xd2402  srl         $a0, $t5, 16
    ctx->pc = 0x2b6922u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x2b6926: 0x401462  .word       0x00401462                   # sub         $v0, $v0, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6926u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 2), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x2b692a: 0x403c02  .word       0x00403C02                   # srl         $a3, $zero, 16 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b692au;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 0), 16));
    // 0x2b692e: 0x523c02  .word       0x00523C02                   # srl         $a3, $s2, 16 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b692eu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x2b6932: 0xa9313c04  swl         $s1, 0x3C04($t1)
    ctx->pc = 0x2b6932u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15364); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 17); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2b6936: 0xac80a045  sw          $zero, -0x5FBB($a0)
    ctx->pc = 0x2b6936u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294942789), GPR_U32(ctx, 0));
    // 0x2b693a: 0x252484  .word       0x00252484                   # sllv        $a0, $a1, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b693au;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 1) & 0x1F));
    // 0x2b693e: 0xd6cc2405  ldc1        $f12, 0x2405($s6)
    ctx->pc = 0x2b693eu;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x2B693E raw=0xD6CC2405");
    // 0x2b6942: 0x10c0a  .word       0x00010C0A                   # movz        $at, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6942u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
    // 0x2b6946: 0x262406  .word       0x00262406                   # srlv        $a0, $a2, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6946u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 1) & 0x1F));
    // 0x2b694a: 0x262403  .word       0x00262403                   # sra         $a0, $a2, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b694au;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 16));
    // 0x2b694e: 0xd2402  srl         $a0, $t5, 16
    ctx->pc = 0x2b694eu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x2b6952: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x2b6952u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    // 0x2b6956: 0x40ae03  .word       0x0040AE03                   # sra         $s5, $zero, 24 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6956u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 0), 24));
    // 0x2b695a: 0x13c02  srl         $a3, $at, 16
    ctx->pc = 0x2b695au;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 1), 16));
    // 0x2b695e: 0xa4482403  sh          $t0, 0x2403($v0)
    ctx->pc = 0x2b695eu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 9219), (uint16_t)GPR_U32(ctx, 8));
    // 0x2b6962: 0x58fcac40  .word       0x58FCAC40                   # blezl       $a3, . + 4 + (-0x53C0 << 2) # 001C0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2B6962u;
    {
        const bool branch_taken_0x2b6962 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x2b6962) {
            ctx->pc = 0x2B6966u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6962u;
            // 0x2b6966: 0xbb96ae03  swr         $s6, -0x51FD($gp) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 28), 4294946307); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 22); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1A66u;
            return;
        }
    }
    ctx->pc = 0x2B696Au;
    // 0x2b696a: 0x59140c0a  .word       0x59140C0A                   # blezl       $t0, . + 4 + (0xC0A << 2) # 00140000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2B696Au;
    {
        const bool branch_taken_0x2b696a = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x2b696a) {
            ctx->pc = 0x2B696Eu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B696Au;
            // 0x2b696e: 0xd6aeae03  ldc1        $f14, -0x51FD($s5) (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x35 at 0x2B696E raw=0xD6AEAE03");
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9996u;
            return;
        }
    }
    ctx->pc = 0x2B6972u;
    // 0x2b6972: 0x202d0c0a  addi        $t5, $at, 0xC0A
    ctx->pc = 0x2b6972u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)3082, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
    // 0x2b6976: 0x40200  sll         $zero, $a0, 8
    ctx->pc = 0x2b6976u;
    
    // 0x2b697a: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x2b697au;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    // 0x2b697e: 0x1dfb0  tge         $zero, $at, 894
    ctx->pc = 0x2b697eu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
    // 0x2b6982: 0x59002402  blezl       $t0, . + 4 + (0x2402 << 2)
    ctx->pc = 0x2B6982u;
    {
        const bool branch_taken_0x2b6982 = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x2b6982) {
            ctx->pc = 0x2B6986u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6982u;
            // 0x2b6986: 0xae03  sra         $s5, $zero, 24 (Delay Slot)
            SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 0), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF98Eu;
            return;
        }
    }
    ctx->pc = 0x2B698Au;
    // 0x2b698a: 0x8dfb0  tge         $zero, $t0, 894
    ctx->pc = 0x2b698au;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
    // 0x2b698e: 0x10dfb1  tgeu        $zero, $s0, 894
    ctx->pc = 0x2b698eu;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
    // 0x2b6992: 0x8dfbf  dsra32      $k1, $t0, 30
    ctx->pc = 0x2b6992u;
    SET_GPR_S64(ctx, 27, GPR_S64(ctx, 8) >> (32 + 30));
    ctx->pc = 0x2b6994u;
}
