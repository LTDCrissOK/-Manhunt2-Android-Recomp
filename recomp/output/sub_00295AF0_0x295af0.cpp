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

// Function: sub_00295AF0
// Address: 0x295af0 - 0x295da8
void sub_00295AF0_0x295af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295AF0_0x295af0");
#endif

    switch (ctx->pc) {
        case 0x295b2cu: goto label_295b2c;
        case 0x295b3cu: goto label_295b3c;
        case 0x295b50u: goto label_295b50;
        case 0x295b58u: goto label_295b58;
        case 0x295b80u: goto label_295b80;
        case 0x295be4u: goto label_295be4;
        case 0x295c28u: goto label_295c28;
        case 0x295c38u: goto label_295c38;
        case 0x295c50u: goto label_295c50;
        case 0x295c70u: goto label_295c70;
        case 0x295c78u: goto label_295c78;
        case 0x295c98u: goto label_295c98;
        case 0x295ca8u: goto label_295ca8;
        case 0x295d48u: goto label_295d48;
        case 0x295d68u: goto label_295d68;
        default: break;
    }

    ctx->pc = 0x295af0u;

    // 0x295af0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x295af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x295af4: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x295af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x295af8: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x295af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x295afc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x295afcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295b00: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x295b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x295b04: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x295b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x295b08: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x295b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x295b0c: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x295b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x295b10: 0xe7b900b8  swc1        $f25, 0xB8($sp)
    ctx->pc = 0x295b10u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x295b14: 0xe7b800b0  swc1        $f24, 0xB0($sp)
    ctx->pc = 0x295b14u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x295b18: 0xe7b700a8  swc1        $f23, 0xA8($sp)
    ctx->pc = 0x295b18u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x295b1c: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x295b1cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x295b20: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x295b20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x295b24: 0xc0a2d84  jal         func_28B610
    ctx->pc = 0x295B24u;
    SET_GPR_U32(ctx, 31, 0x295B2Cu);
    ctx->pc = 0x295B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295B24u;
    // 0x295b28: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B610u, 0x295B24u, 0x295B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295B2Cu;
label_295b2c:
    // 0x295b2c: 0x14400090  bnez        $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x295B2Cu;
    {
        const bool branch_taken_0x295b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295B2Cu;
        // 0x295b30: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295b2c) {
            ctx->pc = 0x295D70u;
            goto label_295d70;
        }
    }
    ctx->pc = 0x295B34u;
    // 0x295b34: 0xc0a576a  jal         func_295DA8
    ctx->pc = 0x295B34u;
    SET_GPR_U32(ctx, 31, 0x295B3Cu);
    ctx->pc = 0x295B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295B34u;
    // 0x295b38: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DA8u, 0x295B34u, 0x295B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295B3Cu;
label_295b3c:
    // 0x295b3c: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x295B3Cu;
    {
        const bool branch_taken_0x295b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295B3Cu;
        // 0x295b40: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295b3c) {
            ctx->pc = 0x295D70u;
            goto label_295d70;
        }
    }
    ctx->pc = 0x295B44u;
    // 0x295b44: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x295b44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x295b48: 0xc0a564e  jal         func_295938
    ctx->pc = 0x295B48u;
    SET_GPR_U32(ctx, 31, 0x295B50u);
    ctx->pc = 0x295B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295B48u;
    // 0x295b4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295938u, 0x295B48u, 0x295B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295B50u;
label_295b50:
    // 0x295b50: 0xc0a5646  jal         func_295918
    ctx->pc = 0x295B50u;
    SET_GPR_U32(ctx, 31, 0x295B58u);
    ctx->pc = 0x295B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295B50u;
    // 0x295b54: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295918u, 0x295B50u, 0x295B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295B58u;
label_295b58:
    // 0x295b58: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x295b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x295b5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x295b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x295b60: 0x8c66bd50  lw          $a2, -0x42B0($v1)
    ctx->pc = 0x295b60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950224)));
    // 0x295b64: 0x8e8400e4  lw          $a0, 0xE4($s4)
    ctx->pc = 0x295b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 228)));
    // 0x295b68: 0x8cc30224  lw          $v1, 0x224($a2)
    ctx->pc = 0x295b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 548)));
    // 0x295b6c: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x295b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x295b70: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x295b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x295b74: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x295b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x295b78: 0xc0a90d4  jal         func_2A4350
    ctx->pc = 0x295B78u;
    SET_GPR_U32(ctx, 31, 0x295B80u);
    ctx->pc = 0x295B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295B78u;
    // 0x295b7c: 0x8c730274  lw          $s3, 0x274($v1) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4350u, 0x295B78u, 0x295B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295B80u;
label_295b80:
    // 0x295b80: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x295b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x295b84: 0x3c013fe3  lui         $at, 0x3FE3
    ctx->pc = 0x295b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16355 << 16));
    // 0x295b88: 0x34218e39  ori         $at, $at, 0x8E39
    ctx->pc = 0x295b88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36409);
    // 0x295b8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x295b8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295b90: 0xc475ac6c  lwc1        $f21, -0x5394($v1)
    ctx->pc = 0x295b90u;
    { uint32_t bits = FAST_READ32(0x6BAC6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x295b94: 0x27a8005c  addiu       $t0, $sp, 0x5C
    ctx->pc = 0x295b94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x295b98: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x295b98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x295b9c: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x295b9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x295ba0: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x295ba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x295ba4: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x295ba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x295ba8: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x295ba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x295bac: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x295bacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x295bb0: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x295bb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x295bb4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x295bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x295bb8: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x295bb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x295bbc: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x295bbcu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x295bc0: 0x27a60054  addiu       $a2, $sp, 0x54
    ctx->pc = 0x295bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x295bc4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x295bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x295bc8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x295bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x295bcc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x295bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295bd0: 0xc7b8000c  lwc1        $f24, 0xC($sp)
    ctx->pc = 0x295bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x295bd4: 0xc7b70004  lwc1        $f23, 0x4($sp)
    ctx->pc = 0x295bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x295bd8: 0x4615b582  mul.s       $f22, $f22, $f21
    ctx->pc = 0x295bd8u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[21]);
    // 0x295bdc: 0xc0a560a  jal         func_295828
    ctx->pc = 0x295BDCu;
    SET_GPR_U32(ctx, 31, 0x295BE4u);
    ctx->pc = 0x295BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295BDCu;
    // 0x295be0: 0xc7b40000  lwc1        $f20, 0x0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x295828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295828u, 0x295BDCu, 0x295BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295BE4u;
label_295be4:
    // 0x295be4: 0x3c013b44  lui         $at, 0x3B44
    ctx->pc = 0x295be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15172 << 16));
    // 0x295be8: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x295be8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
    // 0x295bec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x295becu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295bf0: 0x3c12006c  lui         $s2, 0x6C
    ctx->pc = 0x295bf0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)108 << 16));
    // 0x295bf4: 0x2652aff0  addiu       $s2, $s2, -0x5010
    ctx->pc = 0x295bf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294946800));
    // 0x295bf8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x295bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x295bfc: 0xe6400068  swc1        $f0, 0x68($s2)
    ctx->pc = 0x295bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BB058u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB058u, _value); } while (0); }
    // 0x295c00: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x295c00u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x295c04: 0xe6400064  swc1        $f0, 0x64($s2)
    ctx->pc = 0x295c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BB054u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB054u, _value); } while (0); }
    // 0x295c08: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x295c08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x295c0c: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x295c0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BB050u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB050u, _value); } while (0);
    // 0x295c10: 0x2610ba98  addiu       $s0, $s0, -0x4568
    ctx->pc = 0x295c10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949528));
    // 0x295c14: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x295c14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295c18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x295c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295c1c: 0x8e670070  lw          $a3, 0x70($s3)
    ctx->pc = 0x295c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x295c20: 0xc0efed0  jal         func_3BFB40
    ctx->pc = 0x295C20u;
    SET_GPR_U32(ctx, 31, 0x295C28u);
    ctx->pc = 0x295C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295C20u;
    // 0x295c24: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFB40u, 0x295C20u, 0x295C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295C28u;
label_295c28:
    // 0x295c28: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x295c28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x295c2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x295c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295c30: 0xc09f5e8  jal         func_27D7A0
    ctx->pc = 0x295C30u;
    SET_GPR_U32(ctx, 31, 0x295C38u);
    ctx->pc = 0x295C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295C30u;
    // 0x295c34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D7A0u, 0x295C30u, 0x295C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295C38u;
label_295c38:
    // 0x295c38: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x295c38u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x295c3c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x295c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x295c40: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x295c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x295c44: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x295c44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x295c48: 0xc0a17c6  jal         func_285F18
    ctx->pc = 0x295C48u;
    SET_GPR_U32(ctx, 31, 0x295C50u);
    ctx->pc = 0x295C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295C48u;
    // 0x295c4c: 0x8fa7005c  lw          $a3, 0x5C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F18u, 0x295C48u, 0x295C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295C50u;
label_295c50:
    // 0x295c50: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x295c50u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x295c54: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x295c54u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x295c58: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x295c58u;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
    // 0x295c5c: 0x4600cc06  mov.s       $f16, $f25
    ctx->pc = 0x295c5cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[25]);
    // 0x295c60: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x295c60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x295c64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x295c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295c68: 0xc09f5b6  jal         func_27D6D8
    ctx->pc = 0x295C68u;
    SET_GPR_U32(ctx, 31, 0x295C70u);
    ctx->pc = 0x295C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295C68u;
    // 0x295c6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D6D8u, 0x295C68u, 0x295C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295C70u;
label_295c70:
    // 0x295c70: 0xc0a90d6  jal         func_2A4358
    ctx->pc = 0x295C70u;
    SET_GPR_U32(ctx, 31, 0x295C78u);
    ctx->pc = 0x295C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295C70u;
    // 0x295c74: 0x8e8400e4  lw          $a0, 0xE4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 228)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4358u, 0x295C70u, 0x295C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295C78u;
label_295c78:
    // 0x295c78: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x295c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295c7c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x295c7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295c80: 0x8e670068  lw          $a3, 0x68($s3)
    ctx->pc = 0x295c80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x295c84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x295c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295c88: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x295c88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x295c8c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x295c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x295c90: 0xc0efed0  jal         func_3BFB40
    ctx->pc = 0x295C90u;
    SET_GPR_U32(ctx, 31, 0x295C98u);
    ctx->pc = 0x295C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295C90u;
    // 0x295c94: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFB40u, 0x295C90u, 0x295C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295C98u;
label_295c98:
    // 0x295c98: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x295c98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x295c9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x295c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295ca0: 0xc09f5e8  jal         func_27D7A0
    ctx->pc = 0x295CA0u;
    SET_GPR_U32(ctx, 31, 0x295CA8u);
    ctx->pc = 0x295CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295CA0u;
    // 0x295ca4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D7A0u, 0x295CA0u, 0x295CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295CA8u;
label_295ca8:
    // 0x295ca8: 0x8faa0050  lw          $t2, 0x50($sp)
    ctx->pc = 0x295ca8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x295cac: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x295cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x295cb0: 0x8fa90054  lw          $t1, 0x54($sp)
    ctx->pc = 0x295cb0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x295cb4: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x295cb4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x295cb8: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x295cb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x295cbc: 0x4a1823  subu        $v1, $v0, $t2
    ctx->pc = 0x295cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x295cc0: 0x492023  subu        $a0, $v0, $t1
    ctx->pc = 0x295cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x295cc4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x295cc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x295cc8: 0x0  nop
    ctx->pc = 0x295cc8u;
    // NOP
    // 0x295ccc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x295cccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x295cd0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x295cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x295cd4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x295cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x295cd8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x295cd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x295cdc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x295cdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295ce0: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x295ce0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x295ce4: 0x0  nop
    ctx->pc = 0x295ce4u;
    // NOP
    // 0x295ce8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x295ce8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x295cec: 0x8fa7005c  lw          $a3, 0x5C($sp)
    ctx->pc = 0x295cecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x295cf0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x295cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x295cf4: 0x0  nop
    ctx->pc = 0x295cf4u;
    // NOP
    // 0x295cf8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x295cf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x295cfc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x295cfcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x295d00: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x295d00u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x295d04: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x295d04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x295d08: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x295d08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x295d0c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x295d0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x295d10: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x295d10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x295d14: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x295d14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x295d18: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x295d18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x295d1c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x295d1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x295d20: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x295d20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x295d24: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x295d24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x295d28: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x295d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295d2c: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x295d2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x295d30: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x295d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295d34: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x295d34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295d38: 0xafaa0050  sw          $t2, 0x50($sp)
    ctx->pc = 0x295d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 10));
    // 0x295d3c: 0xafa90054  sw          $t1, 0x54($sp)
    ctx->pc = 0x295d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 9));
    // 0x295d40: 0xc0a17c6  jal         func_285F18
    ctx->pc = 0x295D40u;
    SET_GPR_U32(ctx, 31, 0x295D48u);
    ctx->pc = 0x295D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295D40u;
    // 0x295d44: 0xafa80058  sw          $t0, 0x58($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F18u, 0x295D40u, 0x295D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295D48u;
label_295d48:
    // 0x295d48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x295d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295d4c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x295d4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x295d50: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x295d50u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x295d54: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x295d54u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x295d58: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x295d58u;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
    // 0x295d5c: 0x4600cc06  mov.s       $f16, $f25
    ctx->pc = 0x295d5cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[25]);
    // 0x295d60: 0xc09f5b6  jal         func_27D6D8
    ctx->pc = 0x295D60u;
    SET_GPR_U32(ctx, 31, 0x295D68u);
    ctx->pc = 0x295D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295D60u;
    // 0x295d64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D6D8u, 0x295D60u, 0x295D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295D68u;
label_295d68:
    // 0x295d68: 0xae400060  sw          $zero, 0x60($s2)
    ctx->pc = 0x295d68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 0));
    // 0x295d6c: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x295d6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_295d70:
    // 0x295d70: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x295d70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x295d74: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x295d74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x295d78: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x295d78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x295d7c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x295d7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x295d80: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x295d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x295d84: 0xc7b900b8  lwc1        $f25, 0xB8($sp)
    ctx->pc = 0x295d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x295d88: 0xc7b800b0  lwc1        $f24, 0xB0($sp)
    ctx->pc = 0x295d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x295d8c: 0xc7b700a8  lwc1        $f23, 0xA8($sp)
    ctx->pc = 0x295d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x295d90: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x295d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x295d94: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x295d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x295d98: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x295d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x295d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x295D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295D9Cu;
        // 0x295da0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295DA4u;
    // 0x295da4: 0x0  nop
    ctx->pc = 0x295da4u;
    // NOP
    ctx->pc = 0x295da8u;
}
