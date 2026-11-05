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

// Function: sub_00384880
// Address: 0x384880 - 0x384a50
void sub_00384880_0x384880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384880_0x384880");
#endif

    switch (ctx->pc) {
        case 0x3848d4u: goto label_3848d4;
        case 0x3848e8u: goto label_3848e8;
        case 0x384920u: goto label_384920;
        case 0x384948u: goto label_384948;
        case 0x3849acu: goto label_3849ac;
        case 0x384a10u: goto label_384a10;
        case 0x384a20u: goto label_384a20;
        case 0x384a28u: goto label_384a28;
        default: break;
    }

    ctx->pc = 0x384880u;

    // 0x384880: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x384880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x384884: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x384884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x384888: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x384888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x38488c: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x38488cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x384890: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x384890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x384894: 0x2693dfe4  addiu       $s3, $s4, -0x201C
    ctx->pc = 0x384894u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 4294959076));
    // 0x384898: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x384898u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3FDFE4u));
    // 0x38489c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x38489cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3848a0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3848a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3848a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3848a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3848a8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3848a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3848ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3848acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3848b0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3848b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3848b4: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x3848b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x3848b8: 0x10c3005c  beq         $a2, $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x3848B8u;
    {
        const bool branch_taken_0x3848b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x3848BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3848B8u;
        // 0x3848bc: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3848b8) {
            ctx->pc = 0x384A2Cu;
            goto label_384a2c;
        }
    }
    ctx->pc = 0x3848C0u;
    // 0x3848c0: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3848C0u;
    {
        const bool branch_taken_0x3848c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3848c0) {
            ctx->pc = 0x3848E0u;
            goto label_3848e0;
        }
    }
    ctx->pc = 0x3848C8u;
    // 0x3848c8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3848c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3848cc: 0xc0efe28  jal         func_3BF8A0
    ctx->pc = 0x3848CCu;
    SET_GPR_U32(ctx, 31, 0x3848D4u);
    ctx->pc = 0x3848D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3848CCu;
    // 0x3848d0: 0x24848a98  addiu       $a0, $a0, -0x7568 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF8A0u, 0x3848CCu, 0x3848D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3848D4u;
label_3848d4:
    // 0x3848d4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3848d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3848d8: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x3848D8u;
    {
        const bool branch_taken_0x3848d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3848DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3848D8u;
        // 0x3848dc: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3848d8) {
            ctx->pc = 0x384A2Cu;
            goto label_384a2c;
        }
    }
    ctx->pc = 0x3848E0u;
label_3848e0:
    // 0x3848e0: 0xc0f2678  jal         func_3C99E0
    ctx->pc = 0x3848E0u;
    SET_GPR_U32(ctx, 31, 0x3848E8u);
    ctx->pc = 0x3848E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3848E0u;
    // 0x3848e4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99E0u, 0x3848E0u, 0x3848E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3848E8u;
label_3848e8:
    // 0x3848e8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3848e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3848ec: 0x2472dfdc  addiu       $s2, $v1, -0x2024
    ctx->pc = 0x3848ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959068));
    // 0x3848f0: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x3848f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x3848f4: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x3848f4u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3FDFDCu));
    // 0x3848f8: 0x24846080  addiu       $a0, $a0, 0x6080
    ctx->pc = 0x3848f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24704));
    // 0x3848fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3848fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x384900: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x384900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384904: 0xacf00008  sw          $s0, 0x8($a3)
    ctx->pc = 0x384904u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 16));
    // 0x384908: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x384908u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x38490c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x38490cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384910: 0x240a0180  addiu       $t2, $zero, 0x180
    ctx->pc = 0x384910u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x384914: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x384914u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384918: 0xc0f347c  jal         func_3CD1F0
    ctx->pc = 0x384918u;
    SET_GPR_U32(ctx, 31, 0x384920u);
    ctx->pc = 0x38491Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384918u;
    // 0x38491c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD1F0u, 0x384918u, 0x384920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384920u;
label_384920:
    // 0x384920: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x384920u;
    {
        const bool branch_taken_0x384920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x384924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384920u;
        // 0x384924: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384920) {
            ctx->pc = 0x384A18u;
            goto label_384a18;
        }
    }
    ctx->pc = 0x384928u;
    // 0x384928: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x384928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x38492c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38492cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384930: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x384930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x384934: 0x851025  or          $v0, $a0, $a1
    ctx->pc = 0x384934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x384938: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x384938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x38493c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x38493Cu;
    {
        const bool branch_taken_0x38493c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x384940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38493Cu;
        // 0x384940: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38493c) {
            ctx->pc = 0x3849A8u;
            goto label_3849a8;
        }
    }
    ctx->pc = 0x384944u;
    // 0x384944: 0x24630160  addiu       $v1, $v1, 0x160
    ctx->pc = 0x384944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 352));
label_384948:
    // 0x384948: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x384948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x38494c: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x38494cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x384950: 0x6886000f  ldl         $a2, 0xF($a0)
    ctx->pc = 0x384950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x384954: 0x6c860008  ldr         $a2, 0x8($a0)
    ctx->pc = 0x384954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x384958: 0x68870017  ldl         $a3, 0x17($a0)
    ctx->pc = 0x384958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x38495c: 0x6c870010  ldr         $a3, 0x10($a0)
    ctx->pc = 0x38495cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x384960: 0x6888001f  ldl         $t0, 0x1F($a0)
    ctx->pc = 0x384960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x384964: 0x6c880018  ldr         $t0, 0x18($a0)
    ctx->pc = 0x384964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x384968: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x384968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38496c: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x38496cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x384970: 0xb0a6000f  sdl         $a2, 0xF($a1)
    ctx->pc = 0x384970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x384974: 0xb4a60008  sdr         $a2, 0x8($a1)
    ctx->pc = 0x384974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x384978: 0xb0a70017  sdl         $a3, 0x17($a1)
    ctx->pc = 0x384978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38497c: 0xb4a70010  sdr         $a3, 0x10($a1)
    ctx->pc = 0x38497cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x384980: 0xb0a8001f  sdl         $t0, 0x1F($a1)
    ctx->pc = 0x384980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x384984: 0xb4a80018  sdr         $t0, 0x18($a1)
    ctx->pc = 0x384984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x384988: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x384988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x38498c: 0x0  nop
    ctx->pc = 0x38498cu;
    // NOP
    // 0x384990: 0x0  nop
    ctx->pc = 0x384990u;
    // NOP
    // 0x384994: 0x1483ffec  bne         $a0, $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x384994u;
    {
        const bool branch_taken_0x384994 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x384998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384994u;
        // 0x384998: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384994) {
            ctx->pc = 0x384948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_384948;
        }
    }
    ctx->pc = 0x38499Cu;
    // 0x38499c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x38499Cu;
    {
        const bool branch_taken_0x38499c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38499c) {
            ctx->pc = 0x3849E0u;
            goto label_3849e0;
        }
    }
    ctx->pc = 0x3849A4u;
    // 0x3849a4: 0x0  nop
    ctx->pc = 0x3849a4u;
    // NOP
label_3849a8:
    // 0x3849a8: 0x24630160  addiu       $v1, $v1, 0x160
    ctx->pc = 0x3849a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 352));
label_3849ac:
    // 0x3849ac: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x3849acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3849b0: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x3849b0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3849b4: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x3849b4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3849b8: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x3849b8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3849bc: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x3849bcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x3849c0: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x3849c0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x3849c4: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x3849c4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x3849c8: 0xfca80018  sd          $t0, 0x18($a1)
    ctx->pc = 0x3849c8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
    // 0x3849cc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x3849ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3849d0: 0x0  nop
    ctx->pc = 0x3849d0u;
    // NOP
    // 0x3849d4: 0x0  nop
    ctx->pc = 0x3849d4u;
    // NOP
    // 0x3849d8: 0x1483fff4  bne         $a0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x3849D8u;
    {
        const bool branch_taken_0x3849d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3849DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3849D8u;
        // 0x3849dc: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3849d8) {
            ctx->pc = 0x3849ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3849ac;
        }
    }
    ctx->pc = 0x3849E0u;
label_3849e0:
    // 0x3849e0: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x3849e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3849e4: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x3849e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3849e8: 0x6883000f  ldl         $v1, 0xF($a0)
    ctx->pc = 0x3849e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3849ec: 0x6c830008  ldr         $v1, 0x8($a0)
    ctx->pc = 0x3849ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3849f0: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x3849f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3849f4: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x3849f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3849f8: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x3849f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3849fc: 0xb0a3000f  sdl         $v1, 0xF($a1)
    ctx->pc = 0x3849fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x384a00: 0xb4a30008  sdr         $v1, 0x8($a1)
    ctx->pc = 0x384a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x384a04: 0xaca60010  sw          $a2, 0x10($a1)
    ctx->pc = 0x384a04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 6));
    // 0x384a08: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x384A08u;
    SET_GPR_U32(ctx, 31, 0x384A10u);
    ctx->pc = 0x384A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384A08u;
    // 0x384a0c: 0x8e84dfe4  lw          $a0, -0x201C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294959076)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x384A08u, 0x384A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384A10u;
label_384a10:
    // 0x384a10: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x384A10u;
    {
        const bool branch_taken_0x384a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384A10u;
        // 0x384a14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384a10) {
            ctx->pc = 0x384A2Cu;
            goto label_384a2c;
        }
    }
    ctx->pc = 0x384A18u;
label_384a18:
    // 0x384a18: 0xc0efe28  jal         func_3BF8A0
    ctx->pc = 0x384A18u;
    SET_GPR_U32(ctx, 31, 0x384A20u);
    ctx->pc = 0x384A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384A18u;
    // 0x384a1c: 0x24848ad0  addiu       $a0, $a0, -0x7530 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF8A0u, 0x384A18u, 0x384A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384A20u;
label_384a20:
    // 0x384a20: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x384A20u;
    SET_GPR_U32(ctx, 31, 0x384A28u);
    ctx->pc = 0x384A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384A20u;
    // 0x384a24: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x384A20u, 0x384A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384A28u;
label_384a28:
    // 0x384a28: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x384a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_384a2c:
    // 0x384a2c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x384a2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x384a30: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x384a30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x384a34: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x384a34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x384a38: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x384a38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x384a3c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x384a3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x384a40: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x384a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x384a44: 0x3e00008  jr          $ra
    ctx->pc = 0x384A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384A44u;
        // 0x384a48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384A4Cu;
    // 0x384a4c: 0x0  nop
    ctx->pc = 0x384a4cu;
    // NOP
    ctx->pc = 0x384a50u;
}
