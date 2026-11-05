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

// Function: sub_00114928
// Address: 0x114928 - 0x1149b8
void sub_00114928_0x114928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114928_0x114928");
#endif

    switch (ctx->pc) {
        case 0x114940u: goto label_114940;
        case 0x114954u: goto label_114954;
        case 0x114960u: goto label_114960;
        case 0x11496cu: goto label_11496c;
        case 0x11497cu: goto label_11497c;
        case 0x11498cu: goto label_11498c;
        case 0x1149a0u: goto label_1149a0;
        default: break;
    }

    ctx->pc = 0x114928u;

    // 0x114928: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x114928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11492c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11492cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x114930: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x114930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x114934: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x114934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x114938: 0xc0449c8  jal         func_112720
    ctx->pc = 0x114938u;
    SET_GPR_U32(ctx, 31, 0x114940u);
    ctx->pc = 0x11493Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114938u;
    // 0x11493c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112720u, 0x114938u, 0x114940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114940u;
label_114940:
    // 0x114940: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x114940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114944: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x114944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x114948: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x114948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x11494c: 0xc045612  jal         func_115848
    ctx->pc = 0x11494Cu;
    SET_GPR_U32(ctx, 31, 0x114954u);
    ctx->pc = 0x114950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11494Cu;
    // 0x114950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115848u, 0x11494Cu, 0x114954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114954u;
label_114954:
    // 0x114954: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114958: 0xc045668  jal         func_1159A0
    ctx->pc = 0x114958u;
    SET_GPR_U32(ctx, 31, 0x114960u);
    ctx->pc = 0x11495Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114958u;
    // 0x11495c: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159A0u, 0x114958u, 0x114960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114960u;
label_114960:
    // 0x114960: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x114960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x114964: 0xc04b2a2  jal         func_12CA88
    ctx->pc = 0x114964u;
    SET_GPR_U32(ctx, 31, 0x11496Cu);
    ctx->pc = 0x114968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114964u;
    // 0x114968: 0x2484b530  addiu       $a0, $a0, -0x4AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CA88u, 0x114964u, 0x11496Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11496Cu;
label_11496c:
    // 0x11496c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11496cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114970: 0xae020208  sw          $v0, 0x208($s0)
    ctx->pc = 0x114970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 2));
    // 0x114974: 0xc0456a6  jal         func_115A98
    ctx->pc = 0x114974u;
    SET_GPR_U32(ctx, 31, 0x11497Cu);
    ctx->pc = 0x114978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114974u;
    // 0x114978: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115A98u, 0x114974u, 0x11497Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11497Cu;
label_11497c:
    // 0x11497c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11497cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x114980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114984: 0xc043f22  jal         func_10FC88
    ctx->pc = 0x114984u;
    SET_GPR_U32(ctx, 31, 0x11498Cu);
    ctx->pc = 0x114988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114984u;
    // 0x114988: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC88u, 0x114984u, 0x11498Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11498Cu;
label_11498c:
    // 0x11498c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11498cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x114990: 0xae0001f8  sw          $zero, 0x1F8($s0)
    ctx->pc = 0x114990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 0));
    // 0x114994: 0xae0201fc  sw          $v0, 0x1FC($s0)
    ctx->pc = 0x114994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 508), GPR_U32(ctx, 2));
    // 0x114998: 0xc04526e  jal         func_1149B8
    ctx->pc = 0x114998u;
    SET_GPR_U32(ctx, 31, 0x1149A0u);
    ctx->pc = 0x11499Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114998u;
    // 0x11499c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1149B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1149B8u, 0x114998u, 0x1149A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1149A0u;
label_1149a0:
    // 0x1149a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1149a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1149a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1149a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1149a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1149a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1149ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1149ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1149B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1149ACu;
        // 0x1149b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1149ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1149B4u;
    // 0x1149b4: 0x0  nop
    ctx->pc = 0x1149b4u;
    // NOP
    ctx->pc = 0x1149b8u;
}
