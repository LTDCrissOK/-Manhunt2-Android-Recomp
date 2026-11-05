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

// Function: sub_00295970
// Address: 0x295970 - 0x295af0
void sub_00295970_0x295970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295970_0x295970");
#endif

    switch (ctx->pc) {
        case 0x29598cu: goto label_29598c;
        case 0x29599cu: goto label_29599c;
        case 0x2959c0u: goto label_2959c0;
        case 0x2959ccu: goto label_2959cc;
        case 0x2959e4u: goto label_2959e4;
        case 0x295a1cu: goto label_295a1c;
        case 0x295a24u: goto label_295a24;
        case 0x295a30u: goto label_295a30;
        case 0x295a58u: goto label_295a58;
        case 0x295ac4u: goto label_295ac4;
        case 0x295accu: goto label_295acc;
        default: break;
    }

    ctx->pc = 0x295970u;

    // 0x295970: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x295970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x295974: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x295974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x295978: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x295978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x29597c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29597cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295980: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x295980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x295984: 0xc0a2d84  jal         func_28B610
    ctx->pc = 0x295984u;
    SET_GPR_U32(ctx, 31, 0x29598Cu);
    ctx->pc = 0x295988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295984u;
    // 0x295988: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B610u, 0x295984u, 0x29598Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29598Cu;
label_29598c:
    // 0x29598c: 0x54400053  bnel        $v0, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x29598Cu;
    {
        const bool branch_taken_0x29598c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29598c) {
            ctx->pc = 0x295990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29598Cu;
            // 0x295990: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295ADCu;
            goto label_295adc;
        }
    }
    ctx->pc = 0x295994u;
    // 0x295994: 0xc0a564e  jal         func_295938
    ctx->pc = 0x295994u;
    SET_GPR_U32(ctx, 31, 0x29599Cu);
    ctx->pc = 0x295998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295994u;
    // 0x295998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295938u, 0x295994u, 0x29599Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29599Cu;
label_29599c:
    // 0x29599c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29599cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2959a0: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
    ctx->pc = 0x2959A0u;
    {
        const bool branch_taken_0x2959a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2959A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2959A0u;
        // 0x2959a4: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2959a0) {
            ctx->pc = 0x295AD4u;
            goto label_295ad4;
        }
    }
    ctx->pc = 0x2959A8u;
    // 0x2959a8: 0x3c013fe3  lui         $at, 0x3FE3
    ctx->pc = 0x2959a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16355 << 16));
    // 0x2959ac: 0x34218e39  ori         $at, $at, 0x8E39
    ctx->pc = 0x2959acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36409);
    // 0x2959b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2959b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2959b4: 0xc454ac6c  lwc1        $f20, -0x5394($v0)
    ctx->pc = 0x2959b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294945900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2959b8: 0xc0db198  jal         func_36C660
    ctx->pc = 0x2959B8u;
    SET_GPR_U32(ctx, 31, 0x2959C0u);
    ctx->pc = 0x2959BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2959B8u;
    // 0x2959bc: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C660u, 0x2959B8u, 0x2959C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2959C0u;
label_2959c0:
    // 0x2959c0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2959c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2959c4: 0xc0db170  jal         func_36C5C0
    ctx->pc = 0x2959C4u;
    SET_GPR_U32(ctx, 31, 0x2959CCu);
    ctx->pc = 0x2959C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2959C4u;
    // 0x2959c8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5C0u, 0x2959C4u, 0x2959CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2959CCu;
label_2959cc:
    // 0x2959cc: 0x27a60024  addiu       $a2, $sp, 0x24
    ctx->pc = 0x2959ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x2959d0: 0x27a70028  addiu       $a3, $sp, 0x28
    ctx->pc = 0x2959d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x2959d4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2959d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2959d8: 0x27a8002c  addiu       $t0, $sp, 0x2C
    ctx->pc = 0x2959d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2959dc: 0xc0a560a  jal         func_295828
    ctx->pc = 0x2959DCu;
    SET_GPR_U32(ctx, 31, 0x2959E4u);
    ctx->pc = 0x2959E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2959DCu;
    // 0x2959e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295828u, 0x2959DCu, 0x2959E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2959E4u;
label_2959e4:
    // 0x2959e4: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x2959e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2959e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2959e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2959ec: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2959ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2959f0: 0x8c45bd50  lw          $a1, -0x42B0($v0)
    ctx->pc = 0x2959f0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x2959f4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2959f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x2959f8: 0x8c62adf0  lw          $v0, -0x5210($v1)
    ctx->pc = 0x2959f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6BADF0u));
    // 0x2959fc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2959fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x295a00: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x295a00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x295a04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x295a04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x295a08: 0x8ca30224  lw          $v1, 0x224($a1)
    ctx->pc = 0x295a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 548)));
    // 0x295a0c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x295a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x295a10: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x295a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x295a14: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x295A14u;
    SET_GPR_U32(ctx, 31, 0x295A1Cu);
    ctx->pc = 0x295A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295A14u;
    // 0x295a18: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x295A14u, 0x295A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295A1Cu;
label_295a1c:
    // 0x295a1c: 0xc0a55a8  jal         func_2956A0
    ctx->pc = 0x295A1Cu;
    SET_GPR_U32(ctx, 31, 0x295A24u);
    ctx->pc = 0x295A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295A1Cu;
    // 0x295a20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2956A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2956A0u, 0x295A1Cu, 0x295A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295A24u;
label_295a24:
    // 0x295a24: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x295a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x295a28: 0xc0a90d0  jal         func_2A4340
    ctx->pc = 0x295A28u;
    SET_GPR_U32(ctx, 31, 0x295A30u);
    ctx->pc = 0x295A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295A28u;
    // 0x295a2c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4340u, 0x295A28u, 0x295A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295A30u;
label_295a30:
    // 0x295a30: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x295a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x295a34: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x295a34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x295a38: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x295a38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x295a3c: 0x6845000f  ldl         $a1, 0xF($v0)
    ctx->pc = 0x295a3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x295a40: 0x6c450008  ldr         $a1, 0x8($v0)
    ctx->pc = 0x295a40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x295a44: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x295a44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x295a48: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x295a48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x295a4c: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x295a4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x295a50: 0xc0a90ce  jal         func_2A4338
    ctx->pc = 0x295A50u;
    SET_GPR_U32(ctx, 31, 0x295A58u);
    ctx->pc = 0x295A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295A50u;
    // 0x295a54: 0xb7a50008  sdr         $a1, 0x8($sp) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4338u, 0x295A50u, 0x295A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295A58u;
label_295a58:
    // 0x295a58: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x295a58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x295a5c: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x295a5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x295a60: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x295a60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x295a64: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x295a64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x295a68: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x295a68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x295a6c: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x295a6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x295a70: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x295a70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x295a74: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x295a74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x295a78: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x295a78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295a7c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x295a7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295a80: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x295a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x295a84: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x295a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295a88: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x295a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295a8c: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x295a8cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x295a90: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x295a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x295a94: 0x46140d02  mul.s       $f20, $f1, $f20
    ctx->pc = 0x295a94u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x295a98: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x295a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x295a9c: 0xc7af000c  lwc1        $f15, 0xC($sp)
    ctx->pc = 0x295a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x295aa0: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x295aa0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x295aa4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x295aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x295aa8: 0x460d1340  add.s       $f13, $f2, $f13
    ctx->pc = 0x295aa8u;
    ctx->f[13] = FPU_ADD_S(ctx->f[2], ctx->f[13]);
    // 0x295aac: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x295aacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x295ab0: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x295ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x295ab4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x295ab4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x295ab8: 0x46146301  sub.s       $f12, $f12, $f20
    ctx->pc = 0x295ab8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
    // 0x295abc: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x295ABCu;
    SET_GPR_U32(ctx, 31, 0x295AC4u);
    ctx->pc = 0x295AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295ABCu;
    // 0x295ac0: 0x8fa7002c  lw          $a3, 0x2C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x295ABCu, 0x295AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295AC4u;
label_295ac4:
    // 0x295ac4: 0xc0db1ae  jal         func_36C6B8
    ctx->pc = 0x295AC4u;
    SET_GPR_U32(ctx, 31, 0x295ACCu);
    ctx->pc = 0x36C6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C6B8u, 0x295AC4u, 0x295ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295ACCu;
label_295acc:
    // 0x295acc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x295ACCu;
    {
        const bool branch_taken_0x295acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295ACCu;
        // 0x295ad0: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295acc) {
            ctx->pc = 0x295ADCu;
            goto label_295adc;
        }
    }
    ctx->pc = 0x295AD4u;
label_295ad4:
    // 0x295ad4: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x295ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x295ad8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x295ad8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_295adc:
    // 0x295adc: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x295adcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x295ae0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x295ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x295ae4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x295ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x295ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x295AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295AE8u;
        // 0x295aec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295AF0u;
}
