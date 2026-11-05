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

// Function: sub_001BDCE0
// Address: 0x1bdce0 - 0x1bddb8
void sub_001BDCE0_0x1bdce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDCE0_0x1bdce0");
#endif

    switch (ctx->pc) {
        case 0x1bdd40u: goto label_1bdd40;
        case 0x1bdda0u: goto label_1bdda0;
        default: break;
    }

    ctx->pc = 0x1bdce0u;

    // 0x1bdce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bdce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bdce4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bdce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bdce8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bdce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bdcec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1bdcecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdcf0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bdcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bdcf4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1bdcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1bdcf8: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1bdcf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1bdcfc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1BDCFCu;
    {
        const bool branch_taken_0x1bdcfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDCFCu;
        // 0x1bdd00: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdcfc) {
            ctx->pc = 0x1BDD34u;
            goto label_1bdd34;
        }
    }
    ctx->pc = 0x1BDD04u;
    // 0x1bdd04: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1bdd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bdd08: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x1bdd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x1bdd0c: 0xe62100d0  swc1        $f1, 0xD0($s1)
    ctx->pc = 0x1bdd0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x1bdd10: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1bdd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bdd14: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1bdd14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1bdd18: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1bdd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bdd1c: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1bdd1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1bdd20: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1bdd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1bdd24: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1bdd24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x1bdd28: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1bdd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1bdd2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BDD2Cu;
    {
        const bool branch_taken_0x1bdd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD2Cu;
        // 0x1bdd30: 0xac830014  sw          $v1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdd2c) {
            ctx->pc = 0x1BDD40u;
            goto label_1bdd40;
        }
    }
    ctx->pc = 0x1BDD34u;
label_1bdd34:
    // 0x1bdd34: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x1bdd34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1bdd38: 0xc06fb38  jal         func_1BECE0
    ctx->pc = 0x1BDD38u;
    SET_GPR_U32(ctx, 31, 0x1BDD40u);
    ctx->pc = 0x1BDD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDD38u;
    // 0x1bdd3c: 0x262400d0  addiu       $a0, $s1, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BECE0u, 0x1BDD38u, 0x1BDD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDD40u;
label_1bdd40:
    // 0x1bdd40: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1bdd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bdd44: 0x262500f0  addiu       $a1, $s1, 0xF0
    ctx->pc = 0x1bdd44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x1bdd48: 0x26260110  addiu       $a2, $s1, 0x110
    ctx->pc = 0x1bdd48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1bdd4c: 0x26240260  addiu       $a0, $s1, 0x260
    ctx->pc = 0x1bdd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
    // 0x1bdd50: 0xe62100f0  swc1        $f1, 0xF0($s1)
    ctx->pc = 0x1bdd50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 240), bits); }
    // 0x1bdd54: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1bdd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bdd58: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1bdd58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1bdd5c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1bdd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bdd60: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x1bdd60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x1bdd64: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1bdd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1bdd68: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x1bdd68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x1bdd6c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1bdd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1bdd70: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x1bdd70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x1bdd74: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1bdd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bdd78: 0xe6200110  swc1        $f0, 0x110($s1)
    ctx->pc = 0x1bdd78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 272), bits); }
    // 0x1bdd7c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1bdd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bdd80: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x1bdd80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x1bdd84: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1bdd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bdd88: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x1bdd88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x1bdd8c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1bdd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1bdd90: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x1bdd90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
    // 0x1bdd94: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1bdd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1bdd98: 0xc06fc34  jal         func_1BF0D0
    ctx->pc = 0x1BDD98u;
    SET_GPR_U32(ctx, 31, 0x1BDDA0u);
    ctx->pc = 0x1BDD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDD98u;
    // 0x1bdd9c: 0xacc30014  sw          $v1, 0x14($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF0D0u, 0x1BDD98u, 0x1BDDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDDA0u;
label_1bdda0:
    // 0x1bdda0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bdda0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bdda4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bdda4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bdda8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bdda8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bddac: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDDACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDDACu;
        // 0x1bddb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDDACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDDB4u;
    // 0x1bddb4: 0x0  nop
    ctx->pc = 0x1bddb4u;
    // NOP
    ctx->pc = 0x1bddb8u;
}
