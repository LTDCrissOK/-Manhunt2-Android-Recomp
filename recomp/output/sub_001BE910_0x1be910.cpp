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

// Function: sub_001BE910
// Address: 0x1be910 - 0x1be9d0
void sub_001BE910_0x1be910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE910_0x1be910");
#endif

    switch (ctx->pc) {
        case 0x1be944u: goto label_1be944;
        case 0x1be960u: goto label_1be960;
        case 0x1be974u: goto label_1be974;
        case 0x1be98cu: goto label_1be98c;
        case 0x1be9a8u: goto label_1be9a8;
        case 0x1be9bcu: goto label_1be9bc;
        default: break;
    }

    ctx->pc = 0x1be910u;

    // 0x1be910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1be910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1be914: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1be914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1be918: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1be918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1be91c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1be91cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be920: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1be920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1be924: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1be924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1be928: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE928u;
    {
        const bool branch_taken_0x1be928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be928) {
            ctx->pc = 0x1BE92Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE928u;
            // 0x1be92c: 0x8e0501b0  lw          $a1, 0x1B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE94Cu;
            goto label_1be94c;
        }
    }
    ctx->pc = 0x1BE930u;
    // 0x1be930: 0x8e0201b0  lw          $v0, 0x1B0($s0)
    ctx->pc = 0x1be930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x1be934: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1BE934u;
    {
        const bool branch_taken_0x1be934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE934u;
        // 0x1be938: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be934) {
            ctx->pc = 0x1BE9C0u;
            goto label_1be9c0;
        }
    }
    ctx->pc = 0x1BE93Cu;
    // 0x1be93c: 0xc06fa74  jal         func_1BE9D0
    ctx->pc = 0x1BE93Cu;
    SET_GPR_U32(ctx, 31, 0x1BE944u);
    ctx->pc = 0x1BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE9D0u, 0x1BE93Cu, 0x1BE944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE944u;
label_1be944:
    // 0x1be944: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1BE944u;
    {
        const bool branch_taken_0x1be944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE944u;
        // 0x1be948: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be944) {
            ctx->pc = 0x1BE9C0u;
            goto label_1be9c0;
        }
    }
    ctx->pc = 0x1BE94Cu;
label_1be94c:
    // 0x1be94c: 0x14a2000b  bne         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BE94Cu;
    {
        const bool branch_taken_0x1be94c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BE950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE94Cu;
        // 0x1be950: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be94c) {
            ctx->pc = 0x1BE97Cu;
            goto label_1be97c;
        }
    }
    ctx->pc = 0x1BE954u;
    // 0x1be954: 0x2451f140  addiu       $s1, $v0, -0xEC0
    ctx->pc = 0x1be954u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963520));
    // 0x1be958: 0xc0f62ca  jal         func_3D8B28
    ctx->pc = 0x1BE958u;
    SET_GPR_U32(ctx, 31, 0x1BE960u);
    ctx->pc = 0x1BE95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE958u;
    // 0x1be95c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8B28u, 0x1BE958u, 0x1BE960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE960u;
label_1be960:
    // 0x1be960: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1BE960u;
    {
        const bool branch_taken_0x1be960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be960) {
            ctx->pc = 0x1BE964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE960u;
            // 0x1be964: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE9C0u;
            goto label_1be9c0;
        }
    }
    ctx->pc = 0x1BE968u;
    // 0x1be968: 0x8e0501b0  lw          $a1, 0x1B0($s0)
    ctx->pc = 0x1be968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x1be96c: 0xc0f620c  jal         func_3D8830
    ctx->pc = 0x1BE96Cu;
    SET_GPR_U32(ctx, 31, 0x1BE974u);
    ctx->pc = 0x1BE970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE96Cu;
    // 0x1be970: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8830u, 0x1BE96Cu, 0x1BE974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE974u;
label_1be974:
    // 0x1be974: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1BE974u;
    {
        const bool branch_taken_0x1be974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE974u;
        // 0x1be978: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be974) {
            ctx->pc = 0x1BE9C0u;
            goto label_1be9c0;
        }
    }
    ctx->pc = 0x1BE97Cu;
label_1be97c:
    // 0x1be97c: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE97Cu;
    {
        const bool branch_taken_0x1be97c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be97c) {
            ctx->pc = 0x1BE980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE97Cu;
            // 0x1be980: 0x8e030030  lw          $v1, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE990u;
            goto label_1be990;
        }
    }
    ctx->pc = 0x1BE984u;
    // 0x1be984: 0xc06fa74  jal         func_1BE9D0
    ctx->pc = 0x1BE984u;
    SET_GPR_U32(ctx, 31, 0x1BE98Cu);
    ctx->pc = 0x1BE988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE984u;
    // 0x1be988: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE9D0u, 0x1BE984u, 0x1BE98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE98Cu;
label_1be98c:
    // 0x1be98c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1be98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1be990:
    // 0x1be990: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1be990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1be994: 0x2451f140  addiu       $s1, $v0, -0xEC0
    ctx->pc = 0x1be994u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963520));
    // 0x1be998: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1be998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be99c: 0xae0301b0  sw          $v1, 0x1B0($s0)
    ctx->pc = 0x1be99cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 3));
    // 0x1be9a0: 0xc0f62ca  jal         func_3D8B28
    ctx->pc = 0x1BE9A0u;
    SET_GPR_U32(ctx, 31, 0x1BE9A8u);
    ctx->pc = 0x1BE9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE9A0u;
    // 0x1be9a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8B28u, 0x1BE9A0u, 0x1BE9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE9A8u;
label_1be9a8:
    // 0x1be9a8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BE9A8u;
    {
        const bool branch_taken_0x1be9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be9a8) {
            ctx->pc = 0x1BE9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE9A8u;
            // 0x1be9ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE9C0u;
            goto label_1be9c0;
        }
    }
    ctx->pc = 0x1BE9B0u;
    // 0x1be9b0: 0x8e0501b0  lw          $a1, 0x1B0($s0)
    ctx->pc = 0x1be9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x1be9b4: 0xc0f620c  jal         func_3D8830
    ctx->pc = 0x1BE9B4u;
    SET_GPR_U32(ctx, 31, 0x1BE9BCu);
    ctx->pc = 0x1BE9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE9B4u;
    // 0x1be9b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8830u, 0x1BE9B4u, 0x1BE9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE9BCu;
label_1be9bc:
    // 0x1be9bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1be9bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1be9c0:
    // 0x1be9c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1be9c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1be9c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1be9c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be9c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE9C8u;
        // 0x1be9cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE9C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE9D0u;
}
