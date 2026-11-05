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

// Function: sub_002EDDD8
// Address: 0x2eddd8 - 0x2ede78
void sub_002EDDD8_0x2eddd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EDDD8_0x2eddd8");
#endif

    switch (ctx->pc) {
        case 0x2ede48u: goto label_2ede48;
        default: break;
    }

    ctx->pc = 0x2eddd8u;

    // 0x2eddd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2eddd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2edddc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2edddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2edde0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2edde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2edde4: 0x8c820334  lw          $v0, 0x334($a0)
    ctx->pc = 0x2edde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
    // 0x2edde8: 0x8c8311e4  lw          $v1, 0x11E4($a0)
    ctx->pc = 0x2edde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4580)));
    // 0x2eddec: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EDDECu;
    {
        const bool branch_taken_0x2eddec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDDECu;
        // 0x2eddf0: 0x8c500150  lw          $s0, 0x150($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eddec) {
            ctx->pc = 0x2EDE0Cu;
            goto label_2ede0c;
        }
    }
    ctx->pc = 0x2EDDF4u;
    // 0x2eddf4: 0x8c820338  lw          $v0, 0x338($a0)
    ctx->pc = 0x2eddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 824)));
    // 0x2eddf8: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x2eddf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x2eddfc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EDDFCu;
    {
        const bool branch_taken_0x2eddfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDDFCu;
        // 0x2ede00: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eddfc) {
            ctx->pc = 0x2EDE0Cu;
            goto label_2ede0c;
        }
    }
    ctx->pc = 0x2EDE04u;
    // 0x2ede04: 0x16020017  bne         $s0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2EDE04u;
    {
        const bool branch_taken_0x2ede04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EDE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE04u;
        // 0x2ede08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ede04) {
            ctx->pc = 0x2EDE64u;
            goto label_2ede64;
        }
    }
    ctx->pc = 0x2EDE0Cu;
label_2ede0c:
    // 0x2ede0c: 0xc48100d0  lwc1        $f1, 0xD0($a0)
    ctx->pc = 0x2ede0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ede10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ede10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ede14: 0x0  nop
    ctx->pc = 0x2ede14u;
    // NOP
    // 0x2ede18: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2ede18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ede1c: 0x0  nop
    ctx->pc = 0x2ede1cu;
    // NOP
    // 0x2ede20: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x2EDE20u;
    {
        const bool branch_taken_0x2ede20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EDE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE20u;
        // 0x2ede24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ede20) {
            ctx->pc = 0x2EDE64u;
            goto label_2ede64;
        }
    }
    ctx->pc = 0x2EDE28u;
    // 0x2ede28: 0x8c840338  lw          $a0, 0x338($a0)
    ctx->pc = 0x2ede28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 824)));
    // 0x2ede2c: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x2ede2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x2ede30: 0x2442ffee  addiu       $v0, $v0, -0x12
    ctx->pc = 0x2ede30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967278));
    // 0x2ede34: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2ede34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ede38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EDE38u;
    {
        const bool branch_taken_0x2ede38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE38u;
        // 0x2ede3c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ede38) {
            ctx->pc = 0x2EDE4Cu;
            goto label_2ede4c;
        }
    }
    ctx->pc = 0x2EDE40u;
    // 0x2ede40: 0xc0f753e  jal         func_3DD4F8
    ctx->pc = 0x2EDE40u;
    SET_GPR_U32(ctx, 31, 0x2EDE48u);
    ctx->pc = 0x3DD4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD4F8u, 0x2EDE40u, 0x2EDE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDE48u;
label_2ede48:
    // 0x2ede48: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x2ede48u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2ede4c:
    // 0x2ede4c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EDE4Cu;
    {
        const bool branch_taken_0x2ede4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE4Cu;
        // 0x2ede50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ede4c) {
            ctx->pc = 0x2EDE64u;
            goto label_2ede64;
        }
    }
    ctx->pc = 0x2EDE54u;
    // 0x2ede54: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2ede54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2ede58: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EDE58u;
    {
        const bool branch_taken_0x2ede58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EDE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE58u;
        // 0x2ede5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ede58) {
            ctx->pc = 0x2EDE64u;
            goto label_2ede64;
        }
    }
    ctx->pc = 0x2EDE60u;
    // 0x2ede60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ede60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ede64:
    // 0x2ede64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ede64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ede68: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ede68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ede6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE6Cu;
        // 0x2ede70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDE74u;
    // 0x2ede74: 0x0  nop
    ctx->pc = 0x2ede74u;
    // NOP
    ctx->pc = 0x2ede78u;
}
