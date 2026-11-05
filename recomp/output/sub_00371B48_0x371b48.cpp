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

// Function: sub_00371B48
// Address: 0x371b48 - 0x371c38
void sub_00371B48_0x371b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371B48_0x371b48");
#endif

    switch (ctx->pc) {
        case 0x371b5cu: goto label_371b5c;
        default: break;
    }

    ctx->pc = 0x371b48u;

    // 0x371b48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x371b4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x371b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x371b50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x371b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x371b54: 0xc0dc5e4  jal         func_371790
    ctx->pc = 0x371B54u;
    SET_GPR_U32(ctx, 31, 0x371B5Cu);
    ctx->pc = 0x371B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371B54u;
    // 0x371b58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371790u, 0x371B54u, 0x371B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371B5Cu;
label_371b5c:
    // 0x371b5c: 0x6a020027  ldl         $v0, 0x27($s0)
    ctx->pc = 0x371b5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x371b60: 0x6e020020  ldr         $v0, 0x20($s0)
    ctx->pc = 0x371b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x371b64: 0xb2020037  sdl         $v0, 0x37($s0)
    ctx->pc = 0x371b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x371b68: 0xb6020030  sdr         $v0, 0x30($s0)
    ctx->pc = 0x371b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x371b6c: 0x3408ffc0  ori         $t0, $zero, 0xFFC0
    ctx->pc = 0x371b6cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x371b70: 0x84578  dsll        $t0, $t0, 21
    ctx->pc = 0x371b70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 21);
    // 0x371b74: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x371b74u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x371b78: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x371b78u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x371b7c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x371b7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x371b80: 0x842f8  dsll        $t0, $t0, 11
    ctx->pc = 0x371b80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 11);
    // 0x371b84: 0x350807ff  ori         $t0, $t0, 0x7FF
    ctx->pc = 0x371b84u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2047);
    // 0x371b88: 0x6a02002f  ldl         $v0, 0x2F($s0)
    ctx->pc = 0x371b88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x371b8c: 0x6e020028  ldr         $v0, 0x28($s0)
    ctx->pc = 0x371b8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x371b90: 0xb202003f  sdl         $v0, 0x3F($s0)
    ctx->pc = 0x371b90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x371b94: 0xb6020038  sdr         $v0, 0x38($s0)
    ctx->pc = 0x371b94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x371b98: 0x3409ff80  ori         $t1, $zero, 0xFF80
    ctx->pc = 0x371b98u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x371b9c: 0x94d38  dsll        $t1, $t1, 20
    ctx->pc = 0x371b9cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 20);
    // 0x371ba0: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x371ba0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x371ba4: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x371ba4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x371ba8: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x371ba8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x371bac: 0x94b38  dsll        $t1, $t1, 12
    ctx->pc = 0x371bacu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 12);
    // 0x371bb0: 0x35290fff  ori         $t1, $t1, 0xFFF
    ctx->pc = 0x371bb0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)4095);
    // 0x371bb4: 0x6a020017  ldl         $v0, 0x17($s0)
    ctx->pc = 0x371bb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x371bb8: 0x6e020010  ldr         $v0, 0x10($s0)
    ctx->pc = 0x371bb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x371bbc: 0xb202001f  sdl         $v0, 0x1F($s0)
    ctx->pc = 0x371bbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x371bc0: 0xb6020018  sdr         $v0, 0x18($s0)
    ctx->pc = 0x371bc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x371bc4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x371bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x371bc8: 0xde070020  ld          $a3, 0x20($s0)
    ctx->pc = 0x371bc8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x371bcc: 0xde050010  ld          $a1, 0x10($s0)
    ctx->pc = 0x371bccu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x371bd0: 0x712fe  dsrl32      $v0, $a3, 11
    ctx->pc = 0x371bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) >> (32 + 11));
    // 0x371bd4: 0xde060028  ld          $a2, 0x28($s0)
    ctx->pc = 0x371bd4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x371bd8: 0x51b3e  dsrl32      $v1, $a1, 12
    ctx->pc = 0x371bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) >> (32 + 12));
    // 0x371bdc: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x371bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x371be0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x371be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x371be4: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x371be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x371be8: 0x304407ff  andi        $a0, $v0, 0x7FF
    ctx->pc = 0x371be8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x371bec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x371becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x371bf0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x371bf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371bf4: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x371bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x371bf8: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x371bf8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x371bfc: 0xa92824  and         $a1, $a1, $t1
    ctx->pc = 0x371bfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x371c00: 0x212fc  dsll32      $v0, $v0, 11
    ctx->pc = 0x371c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 11));
    // 0x371c04: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x371c04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x371c08: 0x422fc  dsll32      $a0, $a0, 11
    ctx->pc = 0x371c08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 11));
    // 0x371c0c: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x371c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x371c10: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x371c10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x371c14: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x371c14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x371c18: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x371c18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x371c1c: 0xfe060028  sd          $a2, 0x28($s0)
    ctx->pc = 0x371c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 6));
    // 0x371c20: 0xfe050010  sd          $a1, 0x10($s0)
    ctx->pc = 0x371c20u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 5));
    // 0x371c24: 0xfe070020  sd          $a3, 0x20($s0)
    ctx->pc = 0x371c24u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 7));
    // 0x371c28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x371c28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x371C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371C2Cu;
        // 0x371c30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371C34u;
    // 0x371c34: 0x0  nop
    ctx->pc = 0x371c34u;
    // NOP
    ctx->pc = 0x371c38u;
}
