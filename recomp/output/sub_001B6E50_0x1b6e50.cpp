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

// Function: sub_001B6E50
// Address: 0x1b6e50 - 0x1b70a0
void sub_001B6E50_0x1b6e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6E50_0x1b6e50");
#endif

    switch (ctx->pc) {
        case 0x1b703cu: goto label_1b703c;
        case 0x1b7064u: goto label_1b7064;
        case 0x1b7084u: goto label_1b7084;
        default: break;
    }

    ctx->pc = 0x1b6e50u;

    // 0x1b6e50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b6e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b6e54: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1b6e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1b6e58: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1b6e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1b6e5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b6e5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e60: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x1b6e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1b6e64: 0x8c451004  lw          $a1, 0x1004($v0)
    ctx->pc = 0x1b6e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    // 0x1b6e68: 0x10a00080  beqz        $a1, . + 4 + (0x80 << 2)
    ctx->pc = 0x1B6E68u;
    {
        const bool branch_taken_0x1b6e68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6E68u;
        // 0x1b6e6c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6e68) {
            ctx->pc = 0x1B706Cu;
            goto label_1b706c;
        }
    }
    ctx->pc = 0x1B6E70u;
    // 0x1b6e70: 0x8ca30334  lw          $v1, 0x334($a1)
    ctx->pc = 0x1b6e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 820)));
    // 0x1b6e74: 0x8c640150  lw          $a0, 0x150($v1)
    ctx->pc = 0x1b6e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x1b6e78: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6E78u;
    {
        const bool branch_taken_0x1b6e78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B6E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6E78u;
        // 0x1b6e7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6e78) {
            ctx->pc = 0x1B6E8Cu;
            goto label_1b6e8c;
        }
    }
    ctx->pc = 0x1B6E80u;
    // 0x1b6e80: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x1b6e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x1b6e84: 0x2442f948  addiu       $v0, $v0, -0x6B8
    ctx->pc = 0x1b6e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965576));
    // 0x1b6e88: 0x2c4600d3  sltiu       $a2, $v0, 0xD3
    ctx->pc = 0x1b6e88u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)211) ? 1 : 0);
label_1b6e8c:
    // 0x1b6e8c: 0x14c0007e  bnez        $a2, . + 4 + (0x7E << 2)
    ctx->pc = 0x1B6E8Cu;
    {
        const bool branch_taken_0x1b6e8c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6E8Cu;
        // 0x1b6e90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6e8c) {
            ctx->pc = 0x1B7088u;
            goto label_1b7088;
        }
    }
    ctx->pc = 0x1B6E94u;
    // 0x1b6e94: 0x8e020158  lw          $v0, 0x158($s0)
    ctx->pc = 0x1b6e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x1b6e98: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x1B6E98u;
    {
        const bool branch_taken_0x1b6e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6E98u;
        // 0x1b6e9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6e98) {
            ctx->pc = 0x1B7088u;
            goto label_1b7088;
        }
    }
    ctx->pc = 0x1B6EA0u;
    // 0x1b6ea0: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x1b6ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x1b6ea4: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x1B6EA4u;
    {
        const bool branch_taken_0x1b6ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6EA4u;
        // 0x1b6ea8: 0x2482ffea  addiu       $v0, $a0, -0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6ea4) {
            ctx->pc = 0x1B706Cu;
            goto label_1b706c;
        }
    }
    ctx->pc = 0x1B6EACu;
    // 0x1b6eac: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x1b6eacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1b6eb0: 0x14400075  bnez        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x1B6EB0u;
    {
        const bool branch_taken_0x1b6eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6EB0u;
        // 0x1b6eb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6eb0) {
            ctx->pc = 0x1B7088u;
            goto label_1b7088;
        }
    }
    ctx->pc = 0x1B6EB8u;
    // 0x1b6eb8: 0xde0200c8  ld          $v0, 0xC8($s0)
    ctx->pc = 0x1b6eb8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x1b6ebc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6EBCu;
    {
        const bool branch_taken_0x1b6ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6EBCu;
        // 0x1b6ec0: 0x24020027  addiu       $v0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6ebc) {
            ctx->pc = 0x1B6ECCu;
            goto label_1b6ecc;
        }
    }
    ctx->pc = 0x1B6EC4u;
    // 0x1b6ec4: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x1B6EC4u;
    {
        const bool branch_taken_0x1b6ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6EC4u;
        // 0x1b6ec8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6ec4) {
            ctx->pc = 0x1B7088u;
            goto label_1b7088;
        }
    }
    ctx->pc = 0x1B6ECCu;
label_1b6ecc:
    // 0x1b6ecc: 0x1082006e  beq         $a0, $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x1B6ECCu;
    {
        const bool branch_taken_0x1b6ecc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B6ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6ECCu;
        // 0x1b6ed0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6ecc) {
            ctx->pc = 0x1B7088u;
            goto label_1b7088;
        }
    }
    ctx->pc = 0x1B6ED4u;
    // 0x1b6ed4: 0x8ca30338  lw          $v1, 0x338($a1)
    ctx->pc = 0x1b6ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 824)));
    // 0x1b6ed8: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x1b6ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x1b6edc: 0x2442ffeb  addiu       $v0, $v0, -0x15
    ctx->pc = 0x1b6edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967275));
    // 0x1b6ee0: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1b6ee0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b6ee4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B6EE4u;
    {
        const bool branch_taken_0x1b6ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6ee4) {
            ctx->pc = 0x1B6EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6EE4u;
            // 0x1b6ee8: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6F08u;
            goto label_1b6f08;
        }
    }
    ctx->pc = 0x1B6EECu;
    // 0x1b6eec: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x1b6eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x1b6ef0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B6EF0u;
    {
        const bool branch_taken_0x1b6ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6ef0) {
            ctx->pc = 0x1B6EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6EF0u;
            // 0x1b6ef4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6F08u;
            goto label_1b6f08;
        }
    }
    ctx->pc = 0x1B6EF8u;
    // 0x1b6ef8: 0x8c620098  lw          $v0, 0x98($v1)
    ctx->pc = 0x1b6ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
    // 0x1b6efc: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x1B6EFCu;
    {
        const bool branch_taken_0x1b6efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6EFCu;
        // 0x1b6f00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6efc) {
            ctx->pc = 0x1B7088u;
            goto label_1b7088;
        }
    }
    ctx->pc = 0x1B6F04u;
    // 0x1b6f04: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x1b6f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1b6f08:
    // 0x1b6f08: 0x8c820ff8  lw          $v0, 0xFF8($a0)
    ctx->pc = 0x1b6f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4088)));
    // 0x1b6f0c: 0x248303b0  addiu       $v1, $a0, 0x3B0
    ctx->pc = 0x1b6f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 944));
    // 0x1b6f10: 0xae0001f4  sw          $zero, 0x1F4($s0)
    ctx->pc = 0x1b6f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 0));
    // 0x1b6f14: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x1b6f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x1b6f18: 0xae0001f8  sw          $zero, 0x1F8($s0)
    ctx->pc = 0x1b6f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 0));
    // 0x1b6f1c: 0xae0001fc  sw          $zero, 0x1FC($s0)
    ctx->pc = 0x1b6f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 508), GPR_U32(ctx, 0));
    // 0x1b6f20: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x1b6f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
    // 0x1b6f24: 0xae0001f0  sw          $zero, 0x1F0($s0)
    ctx->pc = 0x1b6f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 496), GPR_U32(ctx, 0));
    // 0x1b6f28: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1b6f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b6f2c: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1b6f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b6f30: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1b6f30u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b6f34: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1b6f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b6f38: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x1b6f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b6f3c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1b6f3cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1b6f40: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1b6f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b6f44: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x1b6f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b6f48: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1b6f48u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b6f4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b6f4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6f50: 0x0  nop
    ctx->pc = 0x1b6f50u;
    // NOP
    // 0x1b6f54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b6f54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6f58: 0x0  nop
    ctx->pc = 0x1b6f58u;
    // NOP
    // 0x1b6f5c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x1B6F5Cu;
    {
        const bool branch_taken_0x1b6f5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6f5c) {
            ctx->pc = 0x1B6F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6F5Cu;
            // 0x1b6f60: 0x8e060084  lw          $a2, 0x84($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6F7Cu;
            goto label_1b6f7c;
        }
    }
    ctx->pc = 0x1B6F64u;
    // 0x1b6f64: 0x8c830ff8  lw          $v1, 0xFF8($a0)
    ctx->pc = 0x1b6f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4088)));
    // 0x1b6f68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b6f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b6f6c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1b6f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1b6f70: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1B6F70u;
    {
        const bool branch_taken_0x1b6f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6F70u;
        // 0x1b6f74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6f70) {
            ctx->pc = 0x1B7088u;
            goto label_1b7088;
        }
    }
    ctx->pc = 0x1B6F78u;
    // 0x1b6f78: 0x8e060084  lw          $a2, 0x84($s0)
    ctx->pc = 0x1b6f78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1b6f7c:
    // 0x1b6f7c: 0x8cc21004  lw          $v0, 0x1004($a2)
    ctx->pc = 0x1b6f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4100)));
    // 0x1b6f80: 0x8cc40104  lw          $a0, 0x104($a2)
    ctx->pc = 0x1b6f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
    // 0x1b6f84: 0x8c450104  lw          $a1, 0x104($v0)
    ctx->pc = 0x1b6f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1b6f88: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b6f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b6f8c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1b6f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b6f90: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x1b6f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x1b6f94: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1b6f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1b6f98: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1b6f98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b6f9c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1b6f9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b6fa0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1b6fa0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b6fa4: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1b6fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b6fa8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1b6fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6fac: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1b6facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6fb0: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x1b6fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b6fb4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1b6fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b6fb8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1b6fb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1b6fbc: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x1b6fbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1b6fc0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1b6fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1b6fc4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1b6fc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6fc8: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1b6fc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b6fcc: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1b6fccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b6fd0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1b6fd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b6fd4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1b6fd4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1b6fd8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1b6fd8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1b6fdc: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1b6fdcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b6fe0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1b6fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b6fe4: 0x8cc30104  lw          $v1, 0x104($a2)
    ctx->pc = 0x1b6fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
    // 0x1b6fe8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b6fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b6fec: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1b6fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1b6ff0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1b6ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b6ff4: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1b6ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b6ff8: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1b6ff8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b6ffc: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1b6ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b7000: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1b7000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b7004: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1b7004u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1b7008: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1b7008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b700c: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1b700cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b7010: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1b7010u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b7014: 0x3c013f7c  lui         $at, 0x3F7C
    ctx->pc = 0x1b7014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16252 << 16));
    // 0x1b7018: 0x34211bda  ori         $at, $at, 0x1BDA
    ctx->pc = 0x1b7018u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7130);
    // 0x1b701c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b701cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7020: 0x0  nop
    ctx->pc = 0x1b7020u;
    // NOP
    // 0x1b7024: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b7024u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7028: 0x0  nop
    ctx->pc = 0x1b7028u;
    // NOP
    // 0x1b702c: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x1B702Cu;
    {
        const bool branch_taken_0x1b702c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B7030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B702Cu;
        // 0x1b7030: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b702c) {
            ctx->pc = 0x1B7088u;
            goto label_1b7088;
        }
    }
    ctx->pc = 0x1B7034u;
    // 0x1b7034: 0xc06dcc6  jal         func_1B7318
    ctx->pc = 0x1B7034u;
    SET_GPR_U32(ctx, 31, 0x1B703Cu);
    ctx->pc = 0x1B7038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7034u;
    // 0x1b7038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7318u, 0x1B7034u, 0x1B703Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B703Cu;
label_1b703c:
    // 0x1b703c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B703Cu;
    {
        const bool branch_taken_0x1b703c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B703Cu;
        // 0x1b7040: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b703c) {
            ctx->pc = 0x1B706Cu;
            goto label_1b706c;
        }
    }
    ctx->pc = 0x1B7044u;
    // 0x1b7044: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x1b7044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1b7048: 0x8c831004  lw          $v1, 0x1004($a0)
    ctx->pc = 0x1b7048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4100)));
    // 0x1b704c: 0x8c62036c  lw          $v0, 0x36C($v1)
    ctx->pc = 0x1b704cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 876)));
    // 0x1b7050: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1b7050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1b7054: 0x1045000c  beq         $v0, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1B7054u;
    {
        const bool branch_taken_0x1b7054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1B7058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7054u;
        // 0x1b7058: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7054) {
            ctx->pc = 0x1B7088u;
            goto label_1b7088;
        }
    }
    ctx->pc = 0x1B705Cu;
    // 0x1b705c: 0xc06db42  jal         func_1B6D08
    ctx->pc = 0x1B705Cu;
    SET_GPR_U32(ctx, 31, 0x1B7064u);
    ctx->pc = 0x1B7060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B705Cu;
    // 0x1b7060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6D08u, 0x1B705Cu, 0x1B7064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7064u;
label_1b7064:
    // 0x1b7064: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7064u;
    {
        const bool branch_taken_0x1b7064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7064) {
            ctx->pc = 0x1B7068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7064u;
            // 0x1b7068: 0xde0200c8  ld          $v0, 0xC8($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7074u;
            goto label_1b7074;
        }
    }
    ctx->pc = 0x1B706Cu;
label_1b706c:
    // 0x1b706c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B706Cu;
    {
        const bool branch_taken_0x1b706c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B706Cu;
        // 0x1b7070: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b706c) {
            ctx->pc = 0x1B7088u;
            goto label_1b7088;
        }
    }
    ctx->pc = 0x1B7074u;
label_1b7074:
    // 0x1b7074: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7074u;
    {
        const bool branch_taken_0x1b7074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7074u;
        // 0x1b7078: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7074) {
            ctx->pc = 0x1B7088u;
            goto label_1b7088;
        }
    }
    ctx->pc = 0x1B707Cu;
    // 0x1b707c: 0xc06df10  jal         func_1B7C40
    ctx->pc = 0x1B707Cu;
    SET_GPR_U32(ctx, 31, 0x1B7084u);
    ctx->pc = 0x1B7080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B707Cu;
    // 0x1b7080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7C40u, 0x1B707Cu, 0x1B7084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7084u;
label_1b7084:
    // 0x1b7084: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b7084u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b7088:
    // 0x1b7088: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1b7088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b708c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1b708cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b7090: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7090u;
        // 0x1b7094: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7098u;
    // 0x1b7098: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b7098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b709c: 0x0  nop
    ctx->pc = 0x1b709cu;
    // NOP
    ctx->pc = 0x1b70a0u;
}
