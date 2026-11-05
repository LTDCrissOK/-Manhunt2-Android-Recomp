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

// Function: sub_00212978
// Address: 0x212978 - 0x212a38
void sub_00212978_0x212978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212978_0x212978");
#endif

    switch (ctx->pc) {
        case 0x2129a8u: goto label_2129a8;
        case 0x2129ccu: goto label_2129cc;
        case 0x212a14u: goto label_212a14;
        case 0x212a1cu: goto label_212a1c;
        default: break;
    }

    ctx->pc = 0x212978u;

    // 0x212978: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x212978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21297c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21297cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212980: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x212980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x212984: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x212984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212988: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x212988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21298c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21298cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212990: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x212990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x212994: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x212994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x212998: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x212998u;
    {
        const bool branch_taken_0x212998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212998u;
        // 0x21299c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212998) {
            ctx->pc = 0x2129F8u;
            goto label_2129f8;
        }
    }
    ctx->pc = 0x2129A0u;
    // 0x2129a0: 0xc095bb8  jal         func_256EE0
    ctx->pc = 0x2129A0u;
    SET_GPR_U32(ctx, 31, 0x2129A8u);
    ctx->pc = 0x256EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256EE0u, 0x2129A0u, 0x2129A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2129A8u;
label_2129a8:
    // 0x2129a8: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2129A8u;
    {
        const bool branch_taken_0x2129a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2129ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2129A8u;
        // 0x2129ac: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2129a8) {
            ctx->pc = 0x2129C4u;
            goto label_2129c4;
        }
    }
    ctx->pc = 0x2129B0u;
    // 0x2129b0: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x2129b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x2129b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2129b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2129b8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2129b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2129bc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2129BCu;
    {
        const bool branch_taken_0x2129bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2129C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2129BCu;
        // 0x2129c0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2129bc) {
            ctx->pc = 0x212A0Cu;
            goto label_212a0c;
        }
    }
    ctx->pc = 0x2129C4u;
label_2129c4:
    // 0x2129c4: 0xc040a7a  jal         func_1029E8
    ctx->pc = 0x2129C4u;
    SET_GPR_U32(ctx, 31, 0x2129CCu);
    ctx->pc = 0x2129C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2129C4u;
    // 0x2129c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1029E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1029E8u, 0x2129C4u, 0x2129CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2129CCu;
label_2129cc:
    // 0x2129cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2129ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2129d0: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2129D0u;
    {
        const bool branch_taken_0x2129d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2129D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2129D0u;
        // 0x2129d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2129d0) {
            ctx->pc = 0x212A20u;
            goto label_212a20;
        }
    }
    ctx->pc = 0x2129D8u;
    // 0x2129d8: 0x8e0400cc  lw          $a0, 0xCC($s0)
    ctx->pc = 0x2129d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x2129dc: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2129dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2129e0: 0x54650003  bnel        $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2129E0u;
    {
        const bool branch_taken_0x2129e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2129e0) {
            ctx->pc = 0x2129E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2129E0u;
            // 0x2129e4: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2129F0u;
            goto label_2129f0;
        }
    }
    ctx->pc = 0x2129E8u;
    // 0x2129e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2129E8u;
    {
        const bool branch_taken_0x2129e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2129ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2129E8u;
        // 0x2129ec: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2129e8) {
            ctx->pc = 0x212A00u;
            goto label_212a00;
        }
    }
    ctx->pc = 0x2129F0u;
label_2129f0:
    // 0x2129f0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2129F0u;
    {
        const bool branch_taken_0x2129f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2129F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2129F0u;
        // 0x2129f4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2129f0) {
            ctx->pc = 0x212A04u;
            goto label_212a04;
        }
    }
    ctx->pc = 0x2129F8u;
label_2129f8:
    // 0x2129f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2129F8u;
    {
        const bool branch_taken_0x2129f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2129FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2129F8u;
        // 0x2129fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2129f8) {
            ctx->pc = 0x212A20u;
            goto label_212a20;
        }
    }
    ctx->pc = 0x212A00u;
label_212a00:
    // 0x212a00: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x212a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_212a04:
    // 0x212a04: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x212a04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212a08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x212a08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212a0c:
    // 0x212a0c: 0xc040b0e  jal         func_102C38
    ctx->pc = 0x212A0Cu;
    SET_GPR_U32(ctx, 31, 0x212A14u);
    ctx->pc = 0x102C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102C38u, 0x212A0Cu, 0x212A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212A14u;
label_212a14:
    // 0x212a14: 0xc095bb8  jal         func_256EE0
    ctx->pc = 0x212A14u;
    SET_GPR_U32(ctx, 31, 0x212A1Cu);
    ctx->pc = 0x212A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212A14u;
    // 0x212a18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256EE0u, 0x212A14u, 0x212A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212A1Cu;
label_212a1c:
    // 0x212a1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x212a1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_212a20:
    // 0x212a20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x212a20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212a24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x212a24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x212a28: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x212a28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212a2c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x212a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x212a30: 0x3e00008  jr          $ra
    ctx->pc = 0x212A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A30u;
        // 0x212a34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212A38u;
}
