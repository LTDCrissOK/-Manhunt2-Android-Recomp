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

// Function: sub_001BDBC8
// Address: 0x1bdbc8 - 0x1bdce0
void sub_001BDBC8_0x1bdbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDBC8_0x1bdbc8");
#endif

    switch (ctx->pc) {
        case 0x1bdcd0u: goto label_1bdcd0;
        default: break;
    }

    ctx->pc = 0x1bdbc8u;

    // 0x1bdbc8: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1bdbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bdbcc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bdbccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bdbd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bdbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bdbd4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1bdbd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdbd8: 0xe50100d0  swc1        $f1, 0xD0($t0)
    ctx->pc = 0x1bdbd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 208), bits); }
    // 0x1bdbdc: 0x250400d0  addiu       $a0, $t0, 0xD0
    ctx->pc = 0x1bdbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 208));
    // 0x1bdbe0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1bdbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bdbe4: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1bdbe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1bdbe8: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1bdbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bdbec: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1bdbecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1bdbf0: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1bdbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1bdbf4: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1bdbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x1bdbf8: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x1bdbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1bdbfc: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1bdbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1bdc00: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x1bdc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1bdc04: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1bdc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1bdc08: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1BDC08u;
    {
        const bool branch_taken_0x1bdc08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdc08) {
            ctx->pc = 0x1BDC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BDC08u;
            // 0x1bdc0c: 0xc4c10000  lwc1        $f1, 0x0($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BDC40u;
            goto label_1bdc40;
        }
    }
    ctx->pc = 0x1BDC10u;
    // 0x1bdc10: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1bdc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bdc14: 0x250400f0  addiu       $a0, $t0, 0xF0
    ctx->pc = 0x1bdc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 240));
    // 0x1bdc18: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1bdc18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdc1c: 0xe50100f0  swc1        $f1, 0xF0($t0)
    ctx->pc = 0x1bdc1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 240), bits); }
    // 0x1bdc20: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1bdc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bdc24: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1bdc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1bdc28: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1bdc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bdc2c: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1bdc2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1bdc30: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1bdc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1bdc34: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1bdc34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x1bdc38: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1BDC38u;
    {
        const bool branch_taken_0x1bdc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC38u;
        // 0x1bdc3c: 0x8ca30014  lw          $v1, 0x14($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdc38) {
            ctx->pc = 0x1BDC68u;
            goto label_1bdc68;
        }
    }
    ctx->pc = 0x1BDC40u;
label_1bdc40:
    // 0x1bdc40: 0x250400f0  addiu       $a0, $t0, 0xF0
    ctx->pc = 0x1bdc40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 240));
    // 0x1bdc44: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1bdc44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdc48: 0xe50100f0  swc1        $f1, 0xF0($t0)
    ctx->pc = 0x1bdc48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 240), bits); }
    // 0x1bdc4c: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x1bdc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bdc50: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1bdc50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1bdc54: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x1bdc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bdc58: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1bdc58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1bdc5c: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x1bdc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1bdc60: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1bdc60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x1bdc64: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x1bdc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_1bdc68:
    // 0x1bdc68: 0x10e0000c  beqz        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x1BDC68u;
    {
        const bool branch_taken_0x1bdc68 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC68u;
        // 0x1bdc6c: 0xac830014  sw          $v1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdc68) {
            ctx->pc = 0x1BDC9Cu;
            goto label_1bdc9c;
        }
    }
    ctx->pc = 0x1BDC70u;
    // 0x1bdc70: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x1bdc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bdc74: 0x25040110  addiu       $a0, $t0, 0x110
    ctx->pc = 0x1bdc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 272));
    // 0x1bdc78: 0xe5010110  swc1        $f1, 0x110($t0)
    ctx->pc = 0x1bdc78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 272), bits); }
    // 0x1bdc7c: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x1bdc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bdc80: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1bdc80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1bdc84: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x1bdc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bdc88: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1bdc88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1bdc8c: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x1bdc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1bdc90: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1bdc90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x1bdc94: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1BDC94u;
    {
        const bool branch_taken_0x1bdc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC94u;
        // 0x1bdc98: 0x8ce30014  lw          $v1, 0x14($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdc94) {
            ctx->pc = 0x1BDCC4u;
            goto label_1bdcc4;
        }
    }
    ctx->pc = 0x1BDC9Cu;
label_1bdc9c:
    // 0x1bdc9c: 0xc50100f0  lwc1        $f1, 0xF0($t0)
    ctx->pc = 0x1bdc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bdca0: 0x25040110  addiu       $a0, $t0, 0x110
    ctx->pc = 0x1bdca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 272));
    // 0x1bdca4: 0xe5010110  swc1        $f1, 0x110($t0)
    ctx->pc = 0x1bdca4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 272), bits); }
    // 0x1bdca8: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x1bdca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bdcac: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1bdcacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1bdcb0: 0xc5210008  lwc1        $f1, 0x8($t1)
    ctx->pc = 0x1bdcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bdcb4: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1bdcb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1bdcb8: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x1bdcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x1bdcbc: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1bdcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x1bdcc0: 0x8d230014  lw          $v1, 0x14($t1)
    ctx->pc = 0x1bdcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
label_1bdcc4:
    // 0x1bdcc4: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1bdcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1bdcc8: 0xc06fc34  jal         func_1BF0D0
    ctx->pc = 0x1BDCC8u;
    SET_GPR_U32(ctx, 31, 0x1BDCD0u);
    ctx->pc = 0x1BDCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDCC8u;
    // 0x1bdccc: 0x25040260  addiu       $a0, $t0, 0x260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF0D0u, 0x1BDCC8u, 0x1BDCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDCD0u;
label_1bdcd0:
    // 0x1bdcd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bdcd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bdcd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDCD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDCD4u;
        // 0x1bdcd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDCD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDCDCu;
    // 0x1bdcdc: 0x0  nop
    ctx->pc = 0x1bdcdcu;
    // NOP
    ctx->pc = 0x1bdce0u;
}
