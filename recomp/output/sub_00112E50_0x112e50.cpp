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

// Function: sub_00112E50
// Address: 0x112e50 - 0x113070
void sub_00112E50_0x112e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112E50_0x112e50");
#endif

    switch (ctx->pc) {
        case 0x112eb4u: goto label_112eb4;
        case 0x112f2cu: goto label_112f2c;
        case 0x112f6cu: goto label_112f6c;
        case 0x112f74u: goto label_112f74;
        case 0x112f88u: goto label_112f88;
        case 0x112fa8u: goto label_112fa8;
        case 0x112fdcu: goto label_112fdc;
        case 0x112ff8u: goto label_112ff8;
        case 0x113048u: goto label_113048;
        default: break;
    }

    ctx->pc = 0x112e50u;

    // 0x112e50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x112e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x112e54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x112e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x112e58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x112e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x112e5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x112e5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112e60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x112e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x112e64: 0x8e0201ec  lw          $v0, 0x1EC($s0)
    ctx->pc = 0x112e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x112e68: 0x5440007d  bnel        $v0, $zero, . + 4 + (0x7D << 2)
    ctx->pc = 0x112E68u;
    {
        const bool branch_taken_0x112e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112e68) {
            ctx->pc = 0x112E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112E68u;
            // 0x112e6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113060u;
            goto label_113060;
        }
    }
    ctx->pc = 0x112E70u;
    // 0x112e70: 0x8e0201dc  lw          $v0, 0x1DC($s0)
    ctx->pc = 0x112e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 476)));
    // 0x112e74: 0x5040004e  beql        $v0, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x112E74u;
    {
        const bool branch_taken_0x112e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112e74) {
            ctx->pc = 0x112E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112E74u;
            // 0x112e78: 0x8e0301e0  lw          $v1, 0x1E0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112FB0u;
            goto label_112fb0;
        }
    }
    ctx->pc = 0x112E7Cu;
    // 0x112e7c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x112e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x112e80: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x112E80u;
    {
        const bool branch_taken_0x112e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112e80) {
            ctx->pc = 0x112E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112E80u;
            // 0x112e84: 0x8e0200e8  lw          $v0, 0xE8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112E94u;
            goto label_112e94;
        }
    }
    ctx->pc = 0x112E88u;
    // 0x112e88: 0xae0001e4  sw          $zero, 0x1E4($s0)
    ctx->pc = 0x112e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 0));
    // 0x112e8c: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x112E8Cu;
    {
        const bool branch_taken_0x112e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E8Cu;
        // 0x112e90: 0xae0001dc  sw          $zero, 0x1DC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e8c) {
            ctx->pc = 0x113058u;
            goto label_113058;
        }
    }
    ctx->pc = 0x112E94u;
label_112e94:
    // 0x112e94: 0x50400072  beql        $v0, $zero, . + 4 + (0x72 << 2)
    ctx->pc = 0x112E94u;
    {
        const bool branch_taken_0x112e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112e94) {
            ctx->pc = 0x112E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112E94u;
            // 0x112e98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113060u;
            goto label_113060;
        }
    }
    ctx->pc = 0x112E9Cu;
    // 0x112e9c: 0x8e0201e0  lw          $v0, 0x1E0($s0)
    ctx->pc = 0x112e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
    // 0x112ea0: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x112EA0u;
    {
        const bool branch_taken_0x112ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112EA0u;
        // 0x112ea4: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112ea0) {
            ctx->pc = 0x112F7Cu;
            goto label_112f7c;
        }
    }
    ctx->pc = 0x112EA8u;
    // 0x112ea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x112ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112eac: 0xc043a7c  jal         func_10E9F0
    ctx->pc = 0x112EACu;
    SET_GPR_U32(ctx, 31, 0x112EB4u);
    ctx->pc = 0x112EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112EACu;
    // 0x112eb0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E9F0u, 0x112EACu, 0x112EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112EB4u;
label_112eb4:
    // 0x112eb4: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x112eb4u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x112eb8: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x112eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x112ebc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x112ebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112ec0: 0x0  nop
    ctx->pc = 0x112ec0u;
    // NOP
    // 0x112ec4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x112ec4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x112ec8: 0x0  nop
    ctx->pc = 0x112ec8u;
    // NOP
    // 0x112ecc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x112ECCu;
    {
        const bool branch_taken_0x112ecc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x112ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112ECCu;
        // 0x112ed0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112ecc) {
            ctx->pc = 0x112ED8u;
            goto label_112ed8;
        }
    }
    ctx->pc = 0x112ED4u;
    // 0x112ed4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x112ed4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_112ed8:
    // 0x112ed8: 0x50400061  beql        $v0, $zero, . + 4 + (0x61 << 2)
    ctx->pc = 0x112ED8u;
    {
        const bool branch_taken_0x112ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112ed8) {
            ctx->pc = 0x112EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112ED8u;
            // 0x112edc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113060u;
            goto label_113060;
        }
    }
    ctx->pc = 0x112EE0u;
    // 0x112ee0: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x112ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x112ee4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x112ee4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112ee8: 0x0  nop
    ctx->pc = 0x112ee8u;
    // NOP
    // 0x112eec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x112eecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x112ef0: 0x0  nop
    ctx->pc = 0x112ef0u;
    // NOP
    // 0x112ef4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x112EF4u;
    {
        const bool branch_taken_0x112ef4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x112EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112EF4u;
        // 0x112ef8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112ef4) {
            ctx->pc = 0x112F00u;
            goto label_112f00;
        }
    }
    ctx->pc = 0x112EFCu;
    // 0x112efc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x112efcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_112f00:
    // 0x112f00: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x112f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x112f04: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x112F04u;
    {
        const bool branch_taken_0x112f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F04u;
        // 0x112f08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112f04) {
            ctx->pc = 0x112F98u;
            goto label_112f98;
        }
    }
    ctx->pc = 0x112F0Cu;
    // 0x112f0c: 0x8e0201e4  lw          $v0, 0x1E4($s0)
    ctx->pc = 0x112f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x112f10: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x112F10u;
    {
        const bool branch_taken_0x112f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F10u;
        // 0x112f14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112f10) {
            ctx->pc = 0x112F98u;
            goto label_112f98;
        }
    }
    ctx->pc = 0x112F18u;
    // 0x112f18: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x112F18u;
    {
        const bool branch_taken_0x112f18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x112F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F18u;
        // 0x112f1c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112f18) {
            ctx->pc = 0x112F98u;
            goto label_112f98;
        }
    }
    ctx->pc = 0x112F20u;
    // 0x112f20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x112f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112f24: 0xc044c1c  jal         func_113070
    ctx->pc = 0x112F24u;
    SET_GPR_U32(ctx, 31, 0x112F2Cu);
    ctx->pc = 0x112F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112F24u;
    // 0x112f28: 0xae1101e0  sw          $s1, 0x1E0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113070u, 0x112F24u, 0x112F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112F2Cu;
label_112f2c:
    // 0x112f2c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x112f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x112f30: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x112f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x112f34: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x112f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x112f38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x112f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x112f3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x112f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x112f40: 0x8c500108  lw          $s0, 0x108($v0)
    ctx->pc = 0x112f40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x112f44: 0x52000046  beql        $s0, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x112F44u;
    {
        const bool branch_taken_0x112f44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x112f44) {
            ctx->pc = 0x112F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112F44u;
            // 0x112f48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113060u;
            goto label_113060;
        }
    }
    ctx->pc = 0x112F4Cu;
    // 0x112f4c: 0x8e020ff0  lw          $v0, 0xFF0($s0)
    ctx->pc = 0x112f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
    // 0x112f50: 0xac400158  sw          $zero, 0x158($v0)
    ctx->pc = 0x112f50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 0));
    // 0x112f54: 0x8e030ff0  lw          $v1, 0xFF0($s0)
    ctx->pc = 0x112f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
    // 0x112f58: 0xac600160  sw          $zero, 0x160($v1)
    ctx->pc = 0x112f58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 352), GPR_U32(ctx, 0));
    // 0x112f5c: 0x8e020ff0  lw          $v0, 0xFF0($s0)
    ctx->pc = 0x112f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
    // 0x112f60: 0xac510178  sw          $s1, 0x178($v0)
    ctx->pc = 0x112f60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 376), GPR_U32(ctx, 17));
    // 0x112f64: 0xc06b9c0  jal         func_1AE700
    ctx->pc = 0x112F64u;
    SET_GPR_U32(ctx, 31, 0x112F6Cu);
    ctx->pc = 0x112F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112F64u;
    // 0x112f68: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE700u, 0x112F64u, 0x112F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112F6Cu;
label_112f6c:
    // 0x112f6c: 0xc09536e  jal         func_254DB8
    ctx->pc = 0x112F6Cu;
    SET_GPR_U32(ctx, 31, 0x112F74u);
    ctx->pc = 0x112F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112F6Cu;
    // 0x112f70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254DB8u, 0x112F6Cu, 0x112F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112F74u;
label_112f74:
    // 0x112f74: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x112F74u;
    {
        const bool branch_taken_0x112f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F74u;
        // 0x112f78: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112f74) {
            ctx->pc = 0x113060u;
            goto label_113060;
        }
    }
    ctx->pc = 0x112F7Cu;
label_112f7c:
    // 0x112f7c: 0x8e0501e8  lw          $a1, 0x1E8($s0)
    ctx->pc = 0x112f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
    // 0x112f80: 0xc04b2b6  jal         func_12CAD8
    ctx->pc = 0x112F80u;
    SET_GPR_U32(ctx, 31, 0x112F88u);
    ctx->pc = 0x112F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112F80u;
    // 0x112f84: 0x2484b530  addiu       $a0, $a0, -0x4AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CAD8u, 0x112F80u, 0x112F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112F88u;
label_112f88:
    // 0x112f88: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x112F88u;
    {
        const bool branch_taken_0x112f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F88u;
        // 0x112f8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112f88) {
            ctx->pc = 0x11305Cu;
            goto label_11305c;
        }
    }
    ctx->pc = 0x112F90u;
    // 0x112f90: 0xae0001e8  sw          $zero, 0x1E8($s0)
    ctx->pc = 0x112f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 488), GPR_U32(ctx, 0));
    // 0x112f94: 0xae0001e0  sw          $zero, 0x1E0($s0)
    ctx->pc = 0x112f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 0));
label_112f98:
    // 0x112f98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x112f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112f9c: 0xae0201e4  sw          $v0, 0x1E4($s0)
    ctx->pc = 0x112f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 2));
    // 0x112fa0: 0xc043d44  jal         func_10F510
    ctx->pc = 0x112FA0u;
    SET_GPR_U32(ctx, 31, 0x112FA8u);
    ctx->pc = 0x112FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112FA0u;
    // 0x112fa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F510u, 0x112FA0u, 0x112FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112FA8u;
label_112fa8:
    // 0x112fa8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x112FA8u;
    {
        const bool branch_taken_0x112fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112FA8u;
        // 0x112fac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112fa8) {
            ctx->pc = 0x113060u;
            goto label_113060;
        }
    }
    ctx->pc = 0x112FB0u;
label_112fb0:
    // 0x112fb0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x112FB0u;
    {
        const bool branch_taken_0x112fb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x112FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112FB0u;
        // 0x112fb4: 0x8e0201e4  lw          $v0, 0x1E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112fb0) {
            ctx->pc = 0x112FC0u;
            goto label_112fc0;
        }
    }
    ctx->pc = 0x112FB8u;
    // 0x112fb8: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x112FB8u;
    {
        const bool branch_taken_0x112fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112fb8) {
            ctx->pc = 0x112FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112FB8u;
            // 0x112fbc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113060u;
            goto label_113060;
        }
    }
    ctx->pc = 0x112FC0u;
label_112fc0:
    // 0x112fc0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x112FC0u;
    {
        const bool branch_taken_0x112fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112FC0u;
        // 0x112fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112fc0) {
            ctx->pc = 0x112FE4u;
            goto label_112fe4;
        }
    }
    ctx->pc = 0x112FC8u;
    // 0x112fc8: 0xae0001e8  sw          $zero, 0x1E8($s0)
    ctx->pc = 0x112fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 488), GPR_U32(ctx, 0));
    // 0x112fcc: 0xae0001e0  sw          $zero, 0x1E0($s0)
    ctx->pc = 0x112fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 0));
    // 0x112fd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x112fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112fd4: 0xc043d44  jal         func_10F510
    ctx->pc = 0x112FD4u;
    SET_GPR_U32(ctx, 31, 0x112FDCu);
    ctx->pc = 0x112FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112FD4u;
    // 0x112fd8: 0xae0001e4  sw          $zero, 0x1E4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F510u, 0x112FD4u, 0x112FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112FDCu;
label_112fdc:
    // 0x112fdc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x112FDCu;
    {
        const bool branch_taken_0x112fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112FDCu;
        // 0x112fe0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112fdc) {
            ctx->pc = 0x113060u;
            goto label_113060;
        }
    }
    ctx->pc = 0x112FE4u;
label_112fe4:
    // 0x112fe4: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x112FE4u;
    {
        const bool branch_taken_0x112fe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x112FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112FE4u;
        // 0x112fe8: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112fe4) {
            ctx->pc = 0x113050u;
            goto label_113050;
        }
    }
    ctx->pc = 0x112FECu;
    // 0x112fec: 0x8e0501e8  lw          $a1, 0x1E8($s0)
    ctx->pc = 0x112fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
    // 0x112ff0: 0xc04b2b6  jal         func_12CAD8
    ctx->pc = 0x112FF0u;
    SET_GPR_U32(ctx, 31, 0x112FF8u);
    ctx->pc = 0x112FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112FF0u;
    // 0x112ff4: 0x2484b530  addiu       $a0, $a0, -0x4AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CAD8u, 0x112FF0u, 0x112FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112FF8u;
label_112ff8:
    // 0x112ff8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x112FF8u;
    {
        const bool branch_taken_0x112ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112FF8u;
        // 0x112ffc: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112ff8) {
            ctx->pc = 0x11305Cu;
            goto label_11305c;
        }
    }
    ctx->pc = 0x113000u;
    // 0x113000: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x113000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x113004: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x113004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x113008: 0xae0001e8  sw          $zero, 0x1E8($s0)
    ctx->pc = 0x113008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 488), GPR_U32(ctx, 0));
    // 0x11300c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11300cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x113010: 0xae0001e0  sw          $zero, 0x1E0($s0)
    ctx->pc = 0x113010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 0));
    // 0x113014: 0xae0001e4  sw          $zero, 0x1E4($s0)
    ctx->pc = 0x113014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 0));
    // 0x113018: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x113018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11301c: 0x8c460108  lw          $a2, 0x108($v0)
    ctx->pc = 0x11301cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x113020: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x113020u;
    {
        const bool branch_taken_0x113020 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x113024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113020u;
        // 0x113024: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113020) {
            ctx->pc = 0x11305Cu;
            goto label_11305c;
        }
    }
    ctx->pc = 0x113028u;
    // 0x113028: 0x8cc30ff0  lw          $v1, 0xFF0($a2)
    ctx->pc = 0x113028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4080)));
    // 0x11302c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x11302cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113030: 0xac650158  sw          $a1, 0x158($v1)
    ctx->pc = 0x113030u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 344), GPR_U32(ctx, 5));
    // 0x113034: 0x8cc20ff0  lw          $v0, 0xFF0($a2)
    ctx->pc = 0x113034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4080)));
    // 0x113038: 0xac450160  sw          $a1, 0x160($v0)
    ctx->pc = 0x113038u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 5));
    // 0x11303c: 0x8cc30ff0  lw          $v1, 0xFF0($a2)
    ctx->pc = 0x11303cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4080)));
    // 0x113040: 0xc09537c  jal         func_254DF0
    ctx->pc = 0x113040u;
    SET_GPR_U32(ctx, 31, 0x113048u);
    ctx->pc = 0x113044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113040u;
    // 0x113044: 0xac600178  sw          $zero, 0x178($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 376), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254DF0u, 0x113040u, 0x113048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113048u;
label_113048:
    // 0x113048: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x113048u;
    {
        const bool branch_taken_0x113048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113048u;
        // 0x11304c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113048) {
            ctx->pc = 0x113060u;
            goto label_113060;
        }
    }
    ctx->pc = 0x113050u;
label_113050:
    // 0x113050: 0xae0001e4  sw          $zero, 0x1E4($s0)
    ctx->pc = 0x113050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 0));
    // 0x113054: 0xae0001e8  sw          $zero, 0x1E8($s0)
    ctx->pc = 0x113054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 488), GPR_U32(ctx, 0));
label_113058:
    // 0x113058: 0xae0001e0  sw          $zero, 0x1E0($s0)
    ctx->pc = 0x113058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 0));
label_11305c:
    // 0x11305c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11305cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_113060:
    // 0x113060: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x113060u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x113064: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x113064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113068: 0x3e00008  jr          $ra
    ctx->pc = 0x113068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113068u;
        // 0x11306c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113070u;
}
