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

// Function: sub_00255EE8
// Address: 0x255ee8 - 0x255ff0
void sub_00255EE8_0x255ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255EE8_0x255ee8");
#endif

    switch (ctx->pc) {
        case 0x255f0cu: goto label_255f0c;
        case 0x255f50u: goto label_255f50;
        default: break;
    }

    ctx->pc = 0x255ee8u;

    // 0x255ee8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x255ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x255eec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x255eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x255ef0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x255ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x255ef4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x255ef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255ef8: 0x8e040ffc  lw          $a0, 0xFFC($s0)
    ctx->pc = 0x255ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4092)));
    // 0x255efc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x255EFCu;
    {
        const bool branch_taken_0x255efc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x255efc) {
            ctx->pc = 0x255F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255EFCu;
            // 0x255f00: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255F10u;
            goto label_255f10;
        }
    }
    ctx->pc = 0x255F04u;
    // 0x255f04: 0xc0713e6  jal         func_1C4F98
    ctx->pc = 0x255F04u;
    SET_GPR_U32(ctx, 31, 0x255F0Cu);
    ctx->pc = 0x1C4F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F98u, 0x255F04u, 0x255F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255F0Cu;
label_255f0c:
    // 0x255f0c: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x255f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_255f10:
    // 0x255f10: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x255f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
    // 0x255f14: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x255f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x255f18: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x255F18u;
    {
        const bool branch_taken_0x255f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x255f18) {
            ctx->pc = 0x255F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255F18u;
            // 0x255f1c: 0x8e040ff0  lw          $a0, 0xFF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255F54u;
            goto label_255f54;
        }
    }
    ctx->pc = 0x255F20u;
    // 0x255f20: 0x8e021004  lw          $v0, 0x1004($s0)
    ctx->pc = 0x255f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4100)));
    // 0x255f24: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x255F24u;
    {
        const bool branch_taken_0x255f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255f24) {
            ctx->pc = 0x255F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255F24u;
            // 0x255f28: 0x8e040ff0  lw          $a0, 0xFF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255F54u;
            goto label_255f54;
        }
    }
    ctx->pc = 0x255F2Cu;
    // 0x255f2c: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x255f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x255f30: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x255f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x255f34: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x255F34u;
    {
        const bool branch_taken_0x255f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255F34u;
        // 0x255f38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255f34) {
            ctx->pc = 0x255F48u;
            goto label_255f48;
        }
    }
    ctx->pc = 0x255F3Cu;
    // 0x255f3c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x255f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x255f40: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x255F40u;
    {
        const bool branch_taken_0x255f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255f40) {
            ctx->pc = 0x255F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255F40u;
            // 0x255f44: 0x8e040ff0  lw          $a0, 0xFF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255F54u;
            goto label_255f54;
        }
    }
    ctx->pc = 0x255F48u;
label_255f48:
    // 0x255f48: 0xc0944da  jal         func_251368
    ctx->pc = 0x255F48u;
    SET_GPR_U32(ctx, 31, 0x255F50u);
    ctx->pc = 0x255F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255F48u;
    // 0x255f4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251368u, 0x255F48u, 0x255F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255F50u;
label_255f50:
    // 0x255f50: 0x8e040ff0  lw          $a0, 0xFF0($s0)
    ctx->pc = 0x255f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
label_255f54:
    // 0x255f54: 0x24850190  addiu       $a1, $a0, 0x190
    ctx->pc = 0x255f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
    // 0x255f58: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x255f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x255f5c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x255F5Cu;
    {
        const bool branch_taken_0x255f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255F5Cu;
        // 0x255f60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255f5c) {
            ctx->pc = 0x255FE0u;
            goto label_255fe0;
        }
    }
    ctx->pc = 0x255F64u;
    // 0x255f64: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x255f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x255f68: 0x38460008  xori        $a2, $v0, 0x8
    ctx->pc = 0x255f68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x255f6c: 0x14c0001d  bnez        $a2, . + 4 + (0x1D << 2)
    ctx->pc = 0x255F6Cu;
    {
        const bool branch_taken_0x255f6c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x255F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255F6Cu;
        // 0x255f70: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255f6c) {
            ctx->pc = 0x255FE4u;
            goto label_255fe4;
        }
    }
    ctx->pc = 0x255F74u;
    // 0x255f74: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x255f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x255f78: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x255f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x255f7c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x255f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x255f80: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x255F80u;
    {
        const bool branch_taken_0x255f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255F80u;
        // 0x255f84: 0x6180b  movn        $v1, $zero, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255f80) {
            ctx->pc = 0x255F98u;
            goto label_255f98;
        }
    }
    ctx->pc = 0x255F88u;
    // 0x255f88: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x255f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x255f8c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x255f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x255f90: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x255F90u;
    {
        const bool branch_taken_0x255f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255f90) {
            ctx->pc = 0x255FE4u;
            goto label_255fe4;
        }
    }
    ctx->pc = 0x255F98u;
label_255f98:
    // 0x255f98: 0x7c800190  sq          $zero, 0x190($a0)
    ctx->pc = 0x255f98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 400), GPR_VEC(ctx, 0));
    // 0x255f9c: 0x7ca00010  sq          $zero, 0x10($a1)
    ctx->pc = 0x255f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 0));
    // 0x255fa0: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x255fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x255fa4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x255fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x255fa8: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x255fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x255fac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x255facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x255fb0: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x255fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    // 0x255fb4: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x255fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x255fb8: 0xaca00030  sw          $zero, 0x30($a1)
    ctx->pc = 0x255fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 0));
    // 0x255fbc: 0xaca00038  sw          $zero, 0x38($a1)
    ctx->pc = 0x255fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
    // 0x255fc0: 0xc4605440  lwc1        $f0, 0x5440($v1)
    ctx->pc = 0x255fc0u;
    { uint32_t bits = FAST_READ32(0x465440u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255fc4: 0xaca20044  sw          $v0, 0x44($a1)
    ctx->pc = 0x255fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 2));
    // 0x255fc8: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x255fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x255fcc: 0xaca00048  sw          $zero, 0x48($a1)
    ctx->pc = 0x255fccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 0));
    // 0x255fd0: 0xaca0003c  sw          $zero, 0x3C($a1)
    ctx->pc = 0x255fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 0));
    // 0x255fd4: 0xaca00040  sw          $zero, 0x40($a1)
    ctx->pc = 0x255fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 0));
    // 0x255fd8: 0xaca00050  sw          $zero, 0x50($a1)
    ctx->pc = 0x255fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 0));
    // 0x255fdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x255fdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_255fe0:
    // 0x255fe0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x255fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_255fe4:
    // 0x255fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x255FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255FE4u;
        // 0x255fe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255FECu;
    // 0x255fec: 0x0  nop
    ctx->pc = 0x255fecu;
    // NOP
    ctx->pc = 0x255ff0u;
}
