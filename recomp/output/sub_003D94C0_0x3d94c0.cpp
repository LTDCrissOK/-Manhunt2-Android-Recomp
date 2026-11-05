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

// Function: sub_003D94C0
// Address: 0x3d94c0 - 0x3d9590
void sub_003D94C0_0x3d94c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D94C0_0x3d94c0");
#endif

    switch (ctx->pc) {
        case 0x3d9500u: goto label_3d9500;
        case 0x3d952cu: goto label_3d952c;
        case 0x3d9544u: goto label_3d9544;
        default: break;
    }

    ctx->pc = 0x3d94c0u;

    // 0x3d94c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d94c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3d94c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d94c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d94c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3d94c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3d94cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d94ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d94d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3d94d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3d94d4: 0x30f1ffff  andi        $s1, $a3, 0xFFFF
    ctx->pc = 0x3d94d4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x3d94d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3d94d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3d94dc: 0x30d200ff  andi        $s2, $a2, 0xFF
    ctx->pc = 0x3d94dcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3d94e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d94e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3d94e4: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x3d94e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3d94e8: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x3d94e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3d94ec: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D94ECu;
    {
        const bool branch_taken_0x3d94ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D94F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D94ECu;
        // 0x3d94f0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d94ec) {
            ctx->pc = 0x3D9508u;
            goto label_3d9508;
        }
    }
    ctx->pc = 0x3D94F4u;
    // 0x3d94f4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3d94f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d94f8: 0xc0f64f2  jal         func_3D93C8
    ctx->pc = 0x3D94F8u;
    SET_GPR_U32(ctx, 31, 0x3D9500u);
    ctx->pc = 0x3D94FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D94F8u;
    // 0x3d94fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D93C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D93C8u, 0x3D94F8u, 0x3D9500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9500u;
label_3d9500:
    // 0x3d9500: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3D9500u;
    {
        const bool branch_taken_0x3d9500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9500u;
        // 0x3d9504: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9500) {
            ctx->pc = 0x3D9548u;
            goto label_3d9548;
        }
    }
    ctx->pc = 0x3D9508u;
label_3d9508:
    // 0x3d9508: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3d9508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3d950c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D950Cu;
    {
        const bool branch_taken_0x3d950c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D950Cu;
        // 0x3d9510: 0x2622ffff  addiu       $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d950c) {
            ctx->pc = 0x3D9534u;
            goto label_3d9534;
        }
    }
    ctx->pc = 0x3D9514u;
    // 0x3d9514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d9514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9518: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3d9518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3d951c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d951cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9520: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3d9520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9524: 0xc0f6300  jal         func_3D8C00
    ctx->pc = 0x3D9524u;
    SET_GPR_U32(ctx, 31, 0x3D952Cu);
    ctx->pc = 0x3D9528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9524u;
    // 0x3d9528: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8C00u, 0x3D9524u, 0x3D952Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D952Cu;
label_3d952c:
    // 0x3d952c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3D952Cu;
    {
        const bool branch_taken_0x3d952c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D952Cu;
        // 0x3d9530: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d952c) {
            ctx->pc = 0x3D9548u;
            goto label_3d9548;
        }
    }
    ctx->pc = 0x3D9534u;
label_3d9534:
    // 0x3d9534: 0x96060010  lhu         $a2, 0x10($s0)
    ctx->pc = 0x3d9534u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3d9538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d9538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d953c: 0xc0f64f2  jal         func_3D93C8
    ctx->pc = 0x3D953Cu;
    SET_GPR_U32(ctx, 31, 0x3D9544u);
    ctx->pc = 0x3D9540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D953Cu;
    // 0x3d9540: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D93C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D93C8u, 0x3D953Cu, 0x3D9544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9544u;
label_3d9544:
    // 0x3d9544: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3d9544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3d9548:
    // 0x3d9548: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x3d9548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x3d954c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3d954cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3d9550: 0xa0520000  sb          $s2, 0x0($v0)
    ctx->pc = 0x3d9550u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x3d9554: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x3d9554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3d9558: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d9558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3d955c: 0xac730004  sw          $s3, 0x4($v1)
    ctx->pc = 0x3d955cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 19));
    // 0x3d9560: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x3d9560u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3d9564: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x3d9564u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3d9568: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3D9568u;
    {
        const bool branch_taken_0x3d9568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9568u;
        // 0x3d956c: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9568) {
            ctx->pc = 0x3D9574u;
            goto label_3d9574;
        }
    }
    ctx->pc = 0x3D9570u;
    // 0x3d9570: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x3d9570u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
label_3d9574:
    // 0x3d9574: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d9574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d9578: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3d9578u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3d957c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3d957cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d9580: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3d9580u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3d9584: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d9584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d9588: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9588u;
        // 0x3d958c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9590u;
}
