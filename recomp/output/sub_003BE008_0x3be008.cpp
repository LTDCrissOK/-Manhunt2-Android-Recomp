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

// Function: sub_003BE008
// Address: 0x3be008 - 0x3be0d0
void sub_003BE008_0x3be008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BE008_0x3be008");
#endif

    switch (ctx->pc) {
        case 0x3be01cu: goto label_3be01c;
        default: break;
    }

    ctx->pc = 0x3be008u;

    // 0x3be008: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3be008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3be00c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3be00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3be010: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3be010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3be014: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x3BE014u;
    SET_GPR_U32(ctx, 31, 0x3BE01Cu);
    ctx->pc = 0x3BE018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE014u;
    // 0x3be018: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x3BE014u, 0x3BE01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE01Cu;
label_3be01c:
    // 0x3be01c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3be01cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be020: 0x101282  srl         $v0, $s0, 10
    ctx->pc = 0x3be020u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 10));
    // 0x3be024: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BE024u;
    {
        const bool branch_taken_0x3be024 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x3BE028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE024u;
        // 0x3be028: 0x22180  sll         $a0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be024) {
            ctx->pc = 0x3BE03Cu;
            goto label_3be03c;
        }
    }
    ctx->pc = 0x3BE02Cu;
    // 0x3be02c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3be02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3be030: 0x320203ff  andi        $v0, $s0, 0x3FF
    ctx->pc = 0x3be030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1023);
    // 0x3be034: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BE034u;
    {
        const bool branch_taken_0x3be034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3be034) {
            ctx->pc = 0x3BE038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BE034u;
            // 0x3be038: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BE044u;
            goto label_3be044;
        }
    }
    ctx->pc = 0x3BE03Cu;
label_3be03c:
    // 0x3be03c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3BE03Cu;
    {
        const bool branch_taken_0x3be03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE03Cu;
        // 0x3be040: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be03c) {
            ctx->pc = 0x3BE0A4u;
            goto label_3be0a4;
        }
    }
    ctx->pc = 0x3BE044u;
label_3be044:
    // 0x3be044: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3be044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3be048: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3BE048u;
    {
        const bool branch_taken_0x3be048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE048u;
        // 0x3be04c: 0xdc860018  ld          $a2, 0x18($a0) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be048) {
            ctx->pc = 0x3BE0A0u;
            goto label_3be0a0;
        }
    }
    ctx->pc = 0x3BE050u;
    // 0x3be050: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3be050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3be054: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x3be054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x3be058: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x3be058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x3be05c: 0x9c430000  lwu         $v1, 0x0($v0)
    ctx->pc = 0x3be05cu;
    SET_GPR_ZE32(ctx, 3, runtime->Load32(rdram, ctx, 0x10000800u));
    // 0x3be060: 0x8c480010  lw          $t0, 0x10($v0)
    ctx->pc = 0x3be060u;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, 0x10000810u)); // MMIO: 0x10000810
    // 0x3be064: 0xdcaaca48  ld          $t2, -0x35B8($a1)
    ctx->pc = 0x3be064u;
    SET_GPR_U64(ctx, 10, FAST_READ64(0x42CA48u));
    // 0x3be068: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x3be068u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
    // 0x3be06c: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BE06Cu;
    {
        const bool branch_taken_0x3be06c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE06Cu;
        // 0x3be070: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be06c) {
            ctx->pc = 0x3BE07Cu;
            goto label_3be07c;
        }
    }
    ctx->pc = 0x3BE074u;
    // 0x3be074: 0x9c430000  lwu         $v1, 0x0($v0)
    ctx->pc = 0x3be074u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3be078: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3be078u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_3be07c:
    // 0x3be07c: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x3be07cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x3be080: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x3be080u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x3be084: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x3be084u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x3be088: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x3be088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x3be08c: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x3be08cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
    // 0x3be090: 0x1231814  dsllv       $v1, $v1, $t1
    ctx->pc = 0x3be090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x3be094: 0xdc840010  ld          $a0, 0x10($a0)
    ctx->pc = 0x3be094u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3be098: 0x64182f  dsubu       $v1, $v1, $a0
    ctx->pc = 0x3be098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 4));
    // 0x3be09c: 0xc3302d  daddu       $a2, $a2, $v1
    ctx->pc = 0x3be09cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 3));
label_3be0a0:
    // 0x3be0a0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3be0a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3be0a4:
    // 0x3be0a4: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BE0A4u;
    {
        const bool branch_taken_0x3be0a4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE0A4u;
        // 0x3be0a8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be0a4) {
            ctx->pc = 0x3BE0B8u;
            goto label_3be0b8;
        }
    }
    ctx->pc = 0x3BE0ACu;
    // 0x3be0ac: 0xf  sync
    ctx->pc = 0x3be0acu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3be0b0: 0x42000038  ei
    ctx->pc = 0x3be0b0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3be0b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3be0b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3be0b8:
    // 0x3be0b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3be0b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3be0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3BE0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BE0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE0BCu;
        // 0x3be0c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BE0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BE0C4u;
    // 0x3be0c4: 0x0  nop
    ctx->pc = 0x3be0c4u;
    // NOP
    // 0x3be0c8: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x3be0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3be0cc: 0x0  nop
    ctx->pc = 0x3be0ccu;
    // NOP
    ctx->pc = 0x3be0d0u;
}
