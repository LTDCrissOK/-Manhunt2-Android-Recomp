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

// Function: sub_00317698
// Address: 0x317698 - 0x317768
void sub_00317698_0x317698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317698_0x317698");
#endif

    switch (ctx->pc) {
        case 0x3176d0u: goto label_3176d0;
        case 0x317710u: goto label_317710;
        case 0x31774cu: goto label_31774c;
        default: break;
    }

    ctx->pc = 0x317698u;

    // 0x317698: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x317698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x31769c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31769cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3176a0: 0x8c45bd78  lw          $a1, -0x4288($v0)
    ctx->pc = 0x3176a0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FBD78u));
    // 0x3176a4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x3176a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3176a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3176a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3176ac: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x3176acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3176b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3176b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3176b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3176b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3176b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3176b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3176bc: 0x3c10005b  lui         $s0, 0x5B
    ctx->pc = 0x3176bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)91 << 16));
    // 0x3176c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3176c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3176c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3176c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3176c8: 0xc0dba1c  jal         func_36E870
    ctx->pc = 0x3176C8u;
    SET_GPR_U32(ctx, 31, 0x3176D0u);
    ctx->pc = 0x3176CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3176C8u;
    // 0x3176cc: 0x261222b0  addiu       $s2, $s0, 0x22B0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 8880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E870u, 0x3176C8u, 0x3176D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3176D0u;
label_3176d0:
    // 0x3176d0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3176d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3176d4: 0x8c44bcf0  lw          $a0, -0x4310($v0)
    ctx->pc = 0x3176d4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBCF0u));
    // 0x3176d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3176d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3176dc: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x3176dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3176e0: 0x34620003  ori         $v0, $v1, 0x3
    ctx->pc = 0x3176e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x3176e4: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x3176e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x3176e8: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x3176e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x3176ec: 0x3882b  sltu        $s1, $zero, $v1
    ctx->pc = 0x3176ecu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3176f0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3176f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3176f4: 0x8e0322b0  lw          $v1, 0x22B0($s0)
    ctx->pc = 0x3176f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8880)));
    // 0x3176f8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3176f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3176fc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3176fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x317700: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x317700u;
    {
        const bool branch_taken_0x317700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x317700) {
            ctx->pc = 0x317718u;
            goto label_317718;
        }
    }
    ctx->pc = 0x317708u;
    // 0x317708: 0xc0c5d42  jal         func_317508
    ctx->pc = 0x317708u;
    SET_GPR_U32(ctx, 31, 0x317710u);
    ctx->pc = 0x317508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317508u, 0x317708u, 0x317710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317710u;
label_317710:
    // 0x317710: 0x8e0222b0  lw          $v0, 0x22B0($s0)
    ctx->pc = 0x317710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8880)));
    // 0x317714: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x317714u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_317718:
    // 0x317718: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x317718u;
    {
        const bool branch_taken_0x317718 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x31771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317718u;
        // 0x31771c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317718) {
            ctx->pc = 0x31773Cu;
            goto label_31773c;
        }
    }
    ctx->pc = 0x317720u;
    // 0x317720: 0x8e64bcf0  lw          $a0, -0x4310($s3)
    ctx->pc = 0x317720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950128)));
    // 0x317724: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x317724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x317728: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x317728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x31772c: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x31772cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x317730: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x317730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x317734: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x317734u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x317738: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x317738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_31773c:
    // 0x31773c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x31773cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x317740: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x317740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x317744: 0xc0dba1c  jal         func_36E870
    ctx->pc = 0x317744u;
    SET_GPR_U32(ctx, 31, 0x31774Cu);
    ctx->pc = 0x317748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317744u;
    // 0x317748: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E870u, 0x317744u, 0x31774Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31774Cu;
label_31774c:
    // 0x31774c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31774cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x317750: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x317750u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x317754: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x317754u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x317758: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x317758u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31775c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31775cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x317760: 0x3e00008  jr          $ra
    ctx->pc = 0x317760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317760u;
        // 0x317764: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317768u;
}
