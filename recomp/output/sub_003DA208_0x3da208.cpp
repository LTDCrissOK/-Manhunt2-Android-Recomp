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

// Function: sub_003DA208
// Address: 0x3da208 - 0x3da298
void sub_003DA208_0x3da208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA208_0x3da208");
#endif

    switch (ctx->pc) {
        case 0x3da238u: goto label_3da238;
        case 0x3da260u: goto label_3da260;
        default: break;
    }

    ctx->pc = 0x3da208u;

    // 0x3da208: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x3da208u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x3da20c: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x3DA20Cu;
    {
        const bool branch_taken_0x3da20c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DA210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA20Cu;
        // 0x3da210: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da20c) {
            ctx->pc = 0x3DA224u;
            goto label_3da224;
        }
    }
    ctx->pc = 0x3DA214u;
    // 0x3da214: 0x94820010  lhu         $v0, 0x10($a0)
    ctx->pc = 0x3da214u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3da218: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3DA218u;
    {
        const bool branch_taken_0x3da218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA218u;
        // 0x3da21c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da218) {
            ctx->pc = 0x3DA224u;
            goto label_3da224;
        }
    }
    ctx->pc = 0x3DA220u;
    // 0x3da220: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x3da220u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_3da224:
    // 0x3da224: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x3da224u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3da228: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3DA228u;
    {
        const bool branch_taken_0x3da228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3da228) {
            ctx->pc = 0x3DA22Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DA228u;
            // 0x3da22c: 0x94820010  lhu         $v0, 0x10($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DA28Cu;
            goto label_3da28c;
        }
    }
    ctx->pc = 0x3DA230u;
    // 0x3da230: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3da230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3da234: 0x0  nop
    ctx->pc = 0x3da234u;
    // NOP
label_3da238:
    // 0x3da238: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x3da238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3da23c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3da23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3da240: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3da240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3da244: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x3da244u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3da248: 0x0  nop
    ctx->pc = 0x3da248u;
    // NOP
    // 0x3da24c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3DA24Cu;
    {
        const bool branch_taken_0x3da24c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3da24c) {
            ctx->pc = 0x3DA268u;
            goto label_3da268;
        }
    }
    ctx->pc = 0x3DA254u;
    // 0x3da254: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3da254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3da258: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3DA258u;
    {
        const bool branch_taken_0x3da258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DA25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA258u;
        // 0x3da25c: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da258) {
            ctx->pc = 0x3DA278u;
            goto label_3da278;
        }
    }
    ctx->pc = 0x3DA260u;
label_3da260:
    // 0x3da260: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA260u;
        // 0x3da264: 0xa4a60000  sh          $a2, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DA268u;
label_3da268:
    // 0x3da268: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x3da268u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3da26c: 0x0  nop
    ctx->pc = 0x3da26cu;
    // NOP
    // 0x3da270: 0x4501fffb  bc1t        . + 4 + (-0x5 << 2)
    ctx->pc = 0x3DA270u;
    {
        const bool branch_taken_0x3da270 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DA274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA270u;
        // 0x3da274: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da270) {
            ctx->pc = 0x3DA260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3da260;
        }
    }
    ctx->pc = 0x3DA278u;
label_3da278:
    // 0x3da278: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x3da278u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3da27c: 0xe6182b  sltu        $v1, $a3, $a2
    ctx->pc = 0x3da27cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3da280: 0x5060ffed  beql        $v1, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3DA280u;
    {
        const bool branch_taken_0x3da280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da280) {
            ctx->pc = 0x3DA284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DA280u;
            // 0x3da284: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DA238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3da238;
        }
    }
    ctx->pc = 0x3DA288u;
    // 0x3da288: 0x94820010  lhu         $v0, 0x10($a0)
    ctx->pc = 0x3da288u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
label_3da28c:
    // 0x3da28c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA28Cu;
        // 0x3da290: 0xa4a20000  sh          $v0, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA28Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DA294u;
    // 0x3da294: 0x0  nop
    ctx->pc = 0x3da294u;
    // NOP
    ctx->pc = 0x3da298u;
}
