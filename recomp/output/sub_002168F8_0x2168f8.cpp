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

// Function: sub_002168F8
// Address: 0x2168f8 - 0x216aa0
void sub_002168F8_0x2168f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002168F8_0x2168f8");
#endif

    switch (ctx->pc) {
        case 0x216914u: goto label_216914;
        case 0x216934u: goto label_216934;
        case 0x21693cu: goto label_21693c;
        case 0x216958u: goto label_216958;
        case 0x216968u: goto label_216968;
        case 0x216978u: goto label_216978;
        case 0x2169bcu: goto label_2169bc;
        case 0x216a18u: goto label_216a18;
        case 0x216a4cu: goto label_216a4c;
        case 0x216a54u: goto label_216a54;
        case 0x216a5cu: goto label_216a5c;
        case 0x216a64u: goto label_216a64;
        case 0x216a6cu: goto label_216a6c;
        case 0x216a74u: goto label_216a74;
        case 0x216a88u: goto label_216a88;
        default: break;
    }

    ctx->pc = 0x2168f8u;

    // 0x2168f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2168f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2168fc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2168fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x216900: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x216900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216904: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x216904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x216908: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x216908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21690c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x21690Cu;
    SET_GPR_U32(ctx, 31, 0x216914u);
    ctx->pc = 0x216910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21690Cu;
    // 0x216910: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x21690Cu, 0x216914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216914u;
label_216914:
    // 0x216914: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x216914u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x216918: 0xae0295d8  sw          $v0, -0x6A28($s0)
    ctx->pc = 0x216918u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F95D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F95D8u, _value); } while (0);
    // 0x21691c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x21691cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x216920: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x216920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216924: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x216924u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x216928: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x216928u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x21692c: 0xc0968bc  jal         func_25A2F0
    ctx->pc = 0x21692Cu;
    SET_GPR_U32(ctx, 31, 0x216934u);
    ctx->pc = 0x216930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21692Cu;
    // 0x216930: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2F0u, 0x21692Cu, 0x216934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216934u;
label_216934:
    // 0x216934: 0xc087282  jal         func_21CA08
    ctx->pc = 0x216934u;
    SET_GPR_U32(ctx, 31, 0x21693Cu);
    ctx->pc = 0x21CA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CA08u, 0x216934u, 0x21693Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21693Cu;
label_21693c:
    // 0x21693c: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x21693Cu;
    {
        const bool branch_taken_0x21693c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x216940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21693Cu;
        // 0x216940: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21693c) {
            ctx->pc = 0x216984u;
            goto label_216984;
        }
    }
    ctx->pc = 0x216944u;
    // 0x216944: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x216944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x216948: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x216948u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x21694c: 0xac43961c  sw          $v1, -0x69E4($v0)
    ctx->pc = 0x21694cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940188), GPR_U32(ctx, 3));
    // 0x216950: 0xc0867f4  jal         func_219FD0
    ctx->pc = 0x216950u;
    SET_GPR_U32(ctx, 31, 0x216958u);
    ctx->pc = 0x216954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216950u;
    // 0x216954: 0x2484ee88  addiu       $a0, $a0, -0x1178 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219FD0u, 0x216950u, 0x216958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216958u;
label_216958:
    // 0x216958: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x216958u;
    {
        const bool branch_taken_0x216958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x216958) {
            ctx->pc = 0x216970u;
            goto label_216970;
        }
    }
    ctx->pc = 0x216960u;
    // 0x216960: 0xc0dbe86  jal         func_36FA18
    ctx->pc = 0x216960u;
    SET_GPR_U32(ctx, 31, 0x216968u);
    ctx->pc = 0x216964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216960u;
    // 0x216964: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FA18u, 0x216960u, 0x216968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216968u;
label_216968:
    // 0x216968: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x216968u;
    {
        const bool branch_taken_0x216968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216968u;
        // 0x21696c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216968) {
            ctx->pc = 0x216A8Cu;
            goto label_216a8c;
        }
    }
    ctx->pc = 0x216970u;
label_216970:
    // 0x216970: 0xc086996  jal         func_21A658
    ctx->pc = 0x216970u;
    SET_GPR_U32(ctx, 31, 0x216978u);
    ctx->pc = 0x21A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A658u, 0x216970u, 0x216978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216978u;
label_216978:
    // 0x216978: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x216978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x21697c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x21697Cu;
    {
        const bool branch_taken_0x21697c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21697Cu;
        // 0x216980: 0xa04095f1  sb          $zero, -0x6A0F($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294940145), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21697c) {
            ctx->pc = 0x216A4Cu;
            goto label_216a4c;
        }
    }
    ctx->pc = 0x216984u;
label_216984:
    // 0x216984: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x216984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x216988: 0x904395f1  lbu         $v1, -0x6A0F($v0)
    ctx->pc = 0x216988u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3F95F1u));
    // 0x21698c: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x21698Cu;
    {
        const bool branch_taken_0x21698c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x216990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21698Cu;
        // 0x216990: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21698c) {
            ctx->pc = 0x216A44u;
            goto label_216a44;
        }
    }
    ctx->pc = 0x216994u;
    // 0x216994: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x216994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x216998: 0x24422508  addiu       $v0, $v0, 0x2508
    ctx->pc = 0x216998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9480));
    // 0x21699c: 0x2464fc40  addiu       $a0, $v1, -0x3C0
    ctx->pc = 0x21699cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966336));
    // 0x2169a0: 0x244258f0  addiu       $v0, $v0, 0x58F0
    ctx->pc = 0x2169a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22768));
    // 0x2169a4: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x2169a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2169a8: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x2169a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2169ac: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2169ACu;
    {
        const bool branch_taken_0x2169ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2169B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2169ACu;
        // 0x2169b0: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2169ac) {
            ctx->pc = 0x216A10u;
            goto label_216a10;
        }
    }
    ctx->pc = 0x2169B4u;
    // 0x2169b4: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x2169b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x2169b8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2169b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2169bc:
    // 0x2169bc: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x2169bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2169c0: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x2169c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2169c4: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x2169c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2169c8: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x2169c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2169cc: 0x68470017  ldl         $a3, 0x17($v0)
    ctx->pc = 0x2169ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2169d0: 0x6c470010  ldr         $a3, 0x10($v0)
    ctx->pc = 0x2169d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2169d4: 0x6848001f  ldl         $t0, 0x1F($v0)
    ctx->pc = 0x2169d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2169d8: 0x6c480018  ldr         $t0, 0x18($v0)
    ctx->pc = 0x2169d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2169dc: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x2169dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2169e0: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x2169e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2169e4: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x2169e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2169e8: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x2169e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2169ec: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x2169ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2169f0: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x2169f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2169f4: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x2169f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2169f8: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x2169f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2169fc: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2169fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x216a00: 0x1443ffee  bne         $v0, $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x216A00u;
    {
        const bool branch_taken_0x216a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x216A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216A00u;
        // 0x216a04: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216a00) {
            ctx->pc = 0x2169BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2169bc;
        }
    }
    ctx->pc = 0x216A08u;
    // 0x216a08: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x216A08u;
    {
        const bool branch_taken_0x216a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216a08) {
            ctx->pc = 0x216A44u;
            goto label_216a44;
        }
    }
    ctx->pc = 0x216A10u;
label_216a10:
    // 0x216a10: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x216a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x216a14: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x216a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_216a18:
    // 0x216a18: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x216a18u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x216a1c: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x216a1cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x216a20: 0xdc470010  ld          $a3, 0x10($v0)
    ctx->pc = 0x216a20u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x216a24: 0xdc480018  ld          $t0, 0x18($v0)
    ctx->pc = 0x216a24u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x216a28: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x216a28u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x216a2c: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x216a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x216a30: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x216a30u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x216a34: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x216a34u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x216a38: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x216a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x216a3c: 0x1443fff6  bne         $v0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x216A3Cu;
    {
        const bool branch_taken_0x216a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x216A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216A3Cu;
        // 0x216a40: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216a3c) {
            ctx->pc = 0x216A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216a18;
        }
    }
    ctx->pc = 0x216A44u;
label_216a44:
    // 0x216a44: 0xc086996  jal         func_21A658
    ctx->pc = 0x216A44u;
    SET_GPR_U32(ctx, 31, 0x216A4Cu);
    ctx->pc = 0x21A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A658u, 0x216A44u, 0x216A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216A4Cu;
label_216a4c:
    // 0x216a4c: 0xc09c896  jal         func_272258
    ctx->pc = 0x216A4Cu;
    SET_GPR_U32(ctx, 31, 0x216A54u);
    ctx->pc = 0x272258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272258u, 0x216A4Cu, 0x216A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216A54u;
label_216a54:
    // 0x216a54: 0xc08702a  jal         func_21C0A8
    ctx->pc = 0x216A54u;
    SET_GPR_U32(ctx, 31, 0x216A5Cu);
    ctx->pc = 0x21C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C0A8u, 0x216A54u, 0x216A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216A5Cu;
label_216a5c:
    // 0x216a5c: 0xc085d08  jal         func_217420
    ctx->pc = 0x216A5Cu;
    SET_GPR_U32(ctx, 31, 0x216A64u);
    ctx->pc = 0x217420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217420u, 0x216A5Cu, 0x216A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216A64u;
label_216a64:
    // 0x216a64: 0xc086f68  jal         func_21BDA0
    ctx->pc = 0x216A64u;
    SET_GPR_U32(ctx, 31, 0x216A6Cu);
    ctx->pc = 0x21BDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BDA0u, 0x216A64u, 0x216A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216A6Cu;
label_216a6c:
    // 0x216a6c: 0xc0c10f6  jal         func_3043D8
    ctx->pc = 0x216A6Cu;
    SET_GPR_U32(ctx, 31, 0x216A74u);
    ctx->pc = 0x3043D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3043D8u, 0x216A6Cu, 0x216A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216A74u;
label_216a74:
    // 0x216a74: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x216A74u;
    {
        const bool branch_taken_0x216a74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x216A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216A74u;
        // 0x216a78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216a74) {
            ctx->pc = 0x216A8Cu;
            goto label_216a8c;
        }
    }
    ctx->pc = 0x216A7Cu;
    // 0x216a7c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x216a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x216a80: 0xc086c66  jal         func_21B198
    ctx->pc = 0x216A80u;
    SET_GPR_U32(ctx, 31, 0x216A88u);
    ctx->pc = 0x216A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216A80u;
    // 0x216a84: 0x2484fc40  addiu       $a0, $a0, -0x3C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B198u, 0x216A80u, 0x216A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216A88u;
label_216a88:
    // 0x216a88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x216a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_216a8c:
    // 0x216a8c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x216a8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216a90: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x216a90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x216a94: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x216a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x216a98: 0x3e00008  jr          $ra
    ctx->pc = 0x216A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216A98u;
        // 0x216a9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216AA0u;
}
