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

// Function: sub_003352E0
// Address: 0x3352e0 - 0x335370
void sub_003352E0_0x3352e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003352E0_0x3352e0");
#endif

    switch (ctx->pc) {
        case 0x335330u: goto label_335330;
        case 0x335358u: goto label_335358;
        default: break;
    }

    ctx->pc = 0x3352e0u;

    // 0x3352e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3352e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3352e4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3352e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3352e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3352e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3352ec: 0x24424470  addiu       $v0, $v0, 0x4470
    ctx->pc = 0x3352ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17520));
    // 0x3352f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3352f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3352f4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3352f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3352f8: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x3352f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x3352fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3352fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335300: 0xae02020c  sw          $v0, 0x20C($s0)
    ctx->pc = 0x335300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 2));
    // 0x335304: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x335304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x335308: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x335308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x33530c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x33530cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x335310: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x335310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x335314: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x335314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x335318: 0xae0001b8  sw          $zero, 0x1B8($s0)
    ctx->pc = 0x335318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 0));
    // 0x33531c: 0xae0001bc  sw          $zero, 0x1BC($s0)
    ctx->pc = 0x33531cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 0));
    // 0x335320: 0xae0001c0  sw          $zero, 0x1C0($s0)
    ctx->pc = 0x335320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 0));
    // 0x335324: 0xae000204  sw          $zero, 0x204($s0)
    ctx->pc = 0x335324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 0));
    // 0x335328: 0xae000208  sw          $zero, 0x208($s0)
    ctx->pc = 0x335328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 0));
    // 0x33532c: 0x0  nop
    ctx->pc = 0x33532cu;
    // NOP
label_335330:
    // 0x335330: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x335330u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x335334: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x335334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x335338: 0x2c820068  sltiu       $v0, $a0, 0x68
    ctx->pc = 0x335338u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)104) ? 1 : 0);
    // 0x33533c: 0x0  nop
    ctx->pc = 0x33533cu;
    // NOP
    // 0x335340: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x335340u;
    {
        const bool branch_taken_0x335340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x335344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335340u;
        // 0x335344: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335340) {
            ctx->pc = 0x335330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_335330;
        }
    }
    ctx->pc = 0x335348u;
    // 0x335348: 0x260401c4  addiu       $a0, $s0, 0x1C4
    ctx->pc = 0x335348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 452));
    // 0x33534c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x33534cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x335350: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x335350u;
    SET_GPR_U32(ctx, 31, 0x335358u);
    ctx->pc = 0x335354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335350u;
    // 0x335354: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x335350u, 0x335358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335358u;
label_335358:
    // 0x335358: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x335358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33535c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33535cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x335360: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x335360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335364: 0x3e00008  jr          $ra
    ctx->pc = 0x335364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335364u;
        // 0x335368: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33536Cu;
    // 0x33536c: 0x0  nop
    ctx->pc = 0x33536cu;
    // NOP
    ctx->pc = 0x335370u;
}
