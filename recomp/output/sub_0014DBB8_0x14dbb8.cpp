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

// Function: sub_0014DBB8
// Address: 0x14dbb8 - 0x14dcb8
void sub_0014DBB8_0x14dbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014DBB8_0x14dbb8");
#endif

    switch (ctx->pc) {
        case 0x14dbdcu: goto label_14dbdc;
        case 0x14dbe8u: goto label_14dbe8;
        case 0x14dbf8u: goto label_14dbf8;
        case 0x14dc00u: goto label_14dc00;
        case 0x14dc10u: goto label_14dc10;
        case 0x14dc34u: goto label_14dc34;
        case 0x14dc3cu: goto label_14dc3c;
        case 0x14dc48u: goto label_14dc48;
        case 0x14dc64u: goto label_14dc64;
        case 0x14dc78u: goto label_14dc78;
        case 0x14dc94u: goto label_14dc94;
        case 0x14dca0u: goto label_14dca0;
        default: break;
    }

    ctx->pc = 0x14dbb8u;

    // 0x14dbb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14dbb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14dbbc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x14dbbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14dbc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14dbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14dbc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14dbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14dbc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14dbc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dbcc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14dbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14dbd0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14dbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14dbd4: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x14DBD4u;
    SET_GPR_U32(ctx, 31, 0x14DBDCu);
    ctx->pc = 0x14DBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DBD4u;
    // 0x14dbd8: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x14DBD4u, 0x14DBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DBDCu;
label_14dbdc:
    // 0x14dbdc: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14dbdcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14dbe0: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x14DBE0u;
    SET_GPR_U32(ctx, 31, 0x14DBE8u);
    ctx->pc = 0x14DBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DBE0u;
    // 0x14dbe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x14DBE0u, 0x14DBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DBE8u;
label_14dbe8:
    // 0x14dbe8: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14dbe8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14dbec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14dbecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dbf0: 0xc053690  jal         func_14DA40
    ctx->pc = 0x14DBF0u;
    SET_GPR_U32(ctx, 31, 0x14DBF8u);
    ctx->pc = 0x14DBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DBF0u;
    // 0x14dbf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA40u, 0x14DBF0u, 0x14DBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DBF8u;
label_14dbf8:
    // 0x14dbf8: 0xc0536e6  jal         func_14DB98
    ctx->pc = 0x14DBF8u;
    SET_GPR_U32(ctx, 31, 0x14DC00u);
    ctx->pc = 0x14DBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DBF8u;
    // 0x14dbfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DB98u, 0x14DBF8u, 0x14DC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DC00u;
label_14dc00:
    // 0x14dc00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14dc00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dc04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14dc04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dc08: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x14DC08u;
    SET_GPR_U32(ctx, 31, 0x14DC10u);
    ctx->pc = 0x14DC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DC08u;
    // 0x14dc0c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x14DC08u, 0x14DC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DC10u;
label_14dc10:
    // 0x14dc10: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14dc10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dc14: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x14dc14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dc18: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x14dc18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14dc1c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x14dc1cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dc20: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x14dc20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14dc24: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x14dc24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14dc28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14dc28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dc2c: 0xc04daca  jal         func_136B28
    ctx->pc = 0x14DC2Cu;
    SET_GPR_U32(ctx, 31, 0x14DC34u);
    ctx->pc = 0x14DC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DC2Cu;
    // 0x14dc30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x14DC2Cu, 0x14DC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DC34u;
label_14dc34:
    // 0x14dc34: 0xc0536e6  jal         func_14DB98
    ctx->pc = 0x14DC34u;
    SET_GPR_U32(ctx, 31, 0x14DC3Cu);
    ctx->pc = 0x14DC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DC34u;
    // 0x14dc38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DB98u, 0x14DC34u, 0x14DC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DC3Cu;
label_14dc3c:
    // 0x14dc3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14dc3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dc40: 0xc046030  jal         func_1180C0
    ctx->pc = 0x14DC40u;
    SET_GPR_U32(ctx, 31, 0x14DC48u);
    ctx->pc = 0x14DC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DC40u;
    // 0x14dc44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180C0u, 0x14DC40u, 0x14DC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DC48u;
label_14dc48:
    // 0x14dc48: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14dc48u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14dc4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14dc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dc50: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x14dc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14dc54: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x14dc54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14dc58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14dc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14dc5c: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x14DC5Cu;
    SET_GPR_U32(ctx, 31, 0x14DC64u);
    ctx->pc = 0x14DC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DC5Cu;
    // 0x14dc60: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x14DC5Cu, 0x14DC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DC64u;
label_14dc64:
    // 0x14dc64: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14dc64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dc68: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x14dc68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dc6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14dc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dc70: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x14DC70u;
    SET_GPR_U32(ctx, 31, 0x14DC78u);
    ctx->pc = 0x14DC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DC70u;
    // 0x14dc74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x14DC70u, 0x14DC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DC78u;
label_14dc78:
    // 0x14dc78: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x14dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x14dc7c: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x14dc7cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x14dc80: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x14dc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x14dc84: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x14dc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x14dc88: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x14dc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x14dc8c: 0xc043c56  jal         func_10F158
    ctx->pc = 0x14DC8Cu;
    SET_GPR_U32(ctx, 31, 0x14DC94u);
    ctx->pc = 0x14DC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DC8Cu;
    // 0x14dc90: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x14DC8Cu, 0x14DC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DC94u;
label_14dc94:
    // 0x14dc94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14dc94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dc98: 0xc053698  jal         func_14DA60
    ctx->pc = 0x14DC98u;
    SET_GPR_U32(ctx, 31, 0x14DCA0u);
    ctx->pc = 0x14DC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DC98u;
    // 0x14dc9c: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA60u, 0x14DC98u, 0x14DCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DCA0u;
label_14dca0:
    // 0x14dca0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14dca0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14dca4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14dca4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14dca8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14dca8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14dcac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14dcacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14dcb0: 0x3e00008  jr          $ra
    ctx->pc = 0x14DCB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DCB0u;
        // 0x14dcb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DCB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14DCB8u;
}
