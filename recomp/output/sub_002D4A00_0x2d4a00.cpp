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

// Function: sub_002D4A00
// Address: 0x2d4a00 - 0x2d4b20
void sub_002D4A00_0x2d4a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4A00_0x2d4a00");
#endif

    switch (ctx->pc) {
        case 0x2d4a7cu: goto label_2d4a7c;
        case 0x2d4ab8u: goto label_2d4ab8;
        case 0x2d4aecu: goto label_2d4aec;
        default: break;
    }

    ctx->pc = 0x2d4a00u;

    // 0x2d4a00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d4a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d4a04: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2d4a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2d4a08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d4a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d4a0c: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x2d4a0cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
    // 0x2d4a10: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d4a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2d4a14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d4a14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4a18: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d4a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d4a1c: 0x250847f8  addiu       $t0, $t0, 0x47F8
    ctx->pc = 0x2d4a1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 18424));
    // 0x2d4a20: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d4a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d4a24: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x2d4a24u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x2d4a28: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d4a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2d4a2c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2d4a2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4a30: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d4a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d4a34: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2d4a34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4a38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d4a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d4a3c: 0x3652f800  ori         $s2, $s2, 0xF800
    ctx->pc = 0x2d4a3cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)63488);
    // 0x2d4a40: 0x8c55bd2c  lw          $s5, -0x42D4($v0)
    ctx->pc = 0x2d4a40u;
    SET_GPR_S32(ctx, 21, (int32_t)FAST_READ32(0x3FBD2Cu));
    // 0x2d4a44: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2d4a44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4a48: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x2d4a48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x2d4a4c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2d4a4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4a50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d4a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4a54: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2d4a54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4a58: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2d4a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d4a5c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2d4a5cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4a60: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x2d4a60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d4a64: 0x244207ff  addiu       $v0, $v0, 0x7FF
    ctx->pc = 0x2d4a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x2d4a68: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2d4a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x2d4a6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d4a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4a70: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2d4a70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2d4a74: 0xc0b4eb2  jal         func_2D3AC8
    ctx->pc = 0x2D4A74u;
    SET_GPR_U32(ctx, 31, 0x2D4A7Cu);
    ctx->pc = 0x2D4A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4A74u;
    // 0x2d4a78: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3AC8u, 0x2D4A74u, 0x2D4A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4A7Cu;
label_2d4a7c:
    // 0x2d4a7c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2d4a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2d4a80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d4a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4a84: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x2d4a84u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
    // 0x2d4a88: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d4a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4a8c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2d4a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2d4a90: 0x25084820  addiu       $t0, $t0, 0x4820
    ctx->pc = 0x2d4a90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 18464));
    // 0x2d4a94: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2d4a94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4a98: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2d4a98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4a9c: 0x244207ff  addiu       $v0, $v0, 0x7FF
    ctx->pc = 0x2d4a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x2d4aa0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2d4aa0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4aa4: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2d4aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x2d4aa8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2d4aa8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4aac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2d4aacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4ab0: 0xc0b4eb2  jal         func_2D3AC8
    ctx->pc = 0x2D4AB0u;
    SET_GPR_U32(ctx, 31, 0x2D4AB8u);
    ctx->pc = 0x2D4AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4AB0u;
    // 0x2d4ab4: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3AC8u, 0x2D4AB0u, 0x2D4AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4AB8u;
label_2d4ab8:
    // 0x2d4ab8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2d4ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2d4abc: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x2d4abcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
    // 0x2d4ac0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d4ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4ac4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d4ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4ac8: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x2d4ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2d4acc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2d4accu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4ad0: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2d4ad0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4ad4: 0x25084848  addiu       $t0, $t0, 0x4848
    ctx->pc = 0x2d4ad4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 18504));
    // 0x2d4ad8: 0x24c607ff  addiu       $a2, $a2, 0x7FF
    ctx->pc = 0x2d4ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2047));
    // 0x2d4adc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2d4adcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4ae0: 0xd23024  and         $a2, $a2, $s2
    ctx->pc = 0x2d4ae0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 18));
    // 0x2d4ae4: 0xc0b4eb2  jal         func_2D3AC8
    ctx->pc = 0x2D4AE4u;
    SET_GPR_U32(ctx, 31, 0x2D4AECu);
    ctx->pc = 0x2D4AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4AE4u;
    // 0x2d4ae8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3AC8u, 0x2D4AE4u, 0x2D4AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4AECu;
label_2d4aec:
    // 0x2d4aec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d4aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4af0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2d4af0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2d4af4: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x2d4af4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
    // 0x2d4af8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d4af8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4afc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d4afcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d4b00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d4b00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4b04: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d4b04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4b08: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d4b08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4b0c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d4b0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4b10: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d4b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d4b14: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4B14u;
        // 0x2d4b18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4B1Cu;
    // 0x2d4b1c: 0x0  nop
    ctx->pc = 0x2d4b1cu;
    // NOP
    ctx->pc = 0x2d4b20u;
}
