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

// Function: sub_0014F8F8
// Address: 0x14f8f8 - 0x14fa28
void sub_0014F8F8_0x14f8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F8F8_0x14f8f8");
#endif

    switch (ctx->pc) {
        case 0x14f920u: goto label_14f920;
        case 0x14f92cu: goto label_14f92c;
        case 0x14f93cu: goto label_14f93c;
        case 0x14f948u: goto label_14f948;
        case 0x14f96cu: goto label_14f96c;
        case 0x14f980u: goto label_14f980;
        case 0x14f990u: goto label_14f990;
        case 0x14f99cu: goto label_14f99c;
        case 0x14f9a8u: goto label_14f9a8;
        case 0x14f9c0u: goto label_14f9c0;
        case 0x14f9dcu: goto label_14f9dc;
        case 0x14f9f0u: goto label_14f9f0;
        case 0x14fa0cu: goto label_14fa0c;
        default: break;
    }

    ctx->pc = 0x14f8f8u;

    // 0x14f8f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14f8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14f8fc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x14f8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14f900: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14f900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14f904: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14f904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14f908: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14f908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f90c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14f90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14f910: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14f910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14f914: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x14f914u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x14f918: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x14F918u;
    SET_GPR_U32(ctx, 31, 0x14F920u);
    ctx->pc = 0x14F91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F918u;
    // 0x14f91c: 0x8e3008bc  lw          $s0, 0x8BC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2236)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x14F918u, 0x14F920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F920u;
label_14f920:
    // 0x14f920: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x14f920u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x14f924: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x14F924u;
    SET_GPR_U32(ctx, 31, 0x14F92Cu);
    ctx->pc = 0x14F928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F924u;
    // 0x14f928: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x14F924u, 0x14F92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F92Cu;
label_14f92c:
    // 0x14f92c: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x14f92cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x14f930: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14f930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f934: 0xc053b00  jal         func_14EC00
    ctx->pc = 0x14F934u;
    SET_GPR_U32(ctx, 31, 0x14F93Cu);
    ctx->pc = 0x14F938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F934u;
    // 0x14f938: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC00u, 0x14F934u, 0x14F93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F93Cu;
label_14f93c:
    // 0x14f93c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14f93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f940: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x14F940u;
    SET_GPR_U32(ctx, 31, 0x14F948u);
    ctx->pc = 0x14F944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F940u;
    // 0x14f944: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x14F940u, 0x14F948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F948u;
label_14f948:
    // 0x14f948: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14f948u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f94c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x14f94cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14f950: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x14f950u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f954: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x14f954u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f958: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x14f958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14f95c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x14f95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14f960: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14f960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f964: 0xc04daca  jal         func_136B28
    ctx->pc = 0x14F964u;
    SET_GPR_U32(ctx, 31, 0x14F96Cu);
    ctx->pc = 0x14F968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F964u;
    // 0x14f968: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x14F964u, 0x14F96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F96Cu;
label_14f96c:
    // 0x14f96c: 0x8e2208cc  lw          $v0, 0x8CC($s1)
    ctx->pc = 0x14f96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2252)));
    // 0x14f970: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14f970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f974: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14f974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f978: 0xc045fbc  jal         func_117EF0
    ctx->pc = 0x14F978u;
    SET_GPR_U32(ctx, 31, 0x14F980u);
    ctx->pc = 0x14F97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F978u;
    // 0x14f97c: 0xae420080  sw          $v0, 0x80($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117EF0u, 0x14F978u, 0x14F980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F980u;
label_14f980:
    // 0x14f980: 0x9226046c  lbu         $a2, 0x46C($s1)
    ctx->pc = 0x14f980u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x14f984: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14f984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f988: 0xc0545d6  jal         func_151758
    ctx->pc = 0x14F988u;
    SET_GPR_U32(ctx, 31, 0x14F990u);
    ctx->pc = 0x14F98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F988u;
    // 0x14f98c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151758u, 0x14F988u, 0x14F990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F990u;
label_14f990:
    // 0x14f990: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14f990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f994: 0xc0460c4  jal         func_118310
    ctx->pc = 0x14F994u;
    SET_GPR_U32(ctx, 31, 0x14F99Cu);
    ctx->pc = 0x14F998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F994u;
    // 0x14f998: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118310u, 0x14F994u, 0x14F99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F99Cu;
label_14f99c:
    // 0x14f99c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14f99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f9a0: 0xc046104  jal         func_118410
    ctx->pc = 0x14F9A0u;
    SET_GPR_U32(ctx, 31, 0x14F9A8u);
    ctx->pc = 0x14F9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F9A0u;
    // 0x14f9a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x14F9A0u, 0x14F9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F9A8u;
label_14f9a8:
    // 0x14f9a8: 0x8e2208c8  lw          $v0, 0x8C8($s1)
    ctx->pc = 0x14f9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2248)));
    // 0x14f9ac: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14F9ACu;
    {
        const bool branch_taken_0x14f9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f9ac) {
            ctx->pc = 0x14F9B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F9ACu;
            // 0x14f9b0: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F9C4u;
            goto label_14f9c4;
        }
    }
    ctx->pc = 0x14F9B4u;
    // 0x14f9b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14f9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f9b8: 0xc046104  jal         func_118410
    ctx->pc = 0x14F9B8u;
    SET_GPR_U32(ctx, 31, 0x14F9C0u);
    ctx->pc = 0x14F9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F9B8u;
    // 0x14f9bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x14F9B8u, 0x14F9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F9C0u;
label_14f9c0:
    // 0x14f9c0: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x14f9c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
label_14f9c4:
    // 0x14f9c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14f9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f9c8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x14f9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14f9cc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x14f9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14f9d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14f9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14f9d4: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x14F9D4u;
    SET_GPR_U32(ctx, 31, 0x14F9DCu);
    ctx->pc = 0x14F9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F9D4u;
    // 0x14f9d8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x14F9D4u, 0x14F9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F9DCu;
label_14f9dc:
    // 0x14f9dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14f9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f9e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14f9e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f9e4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x14f9e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f9e8: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x14F9E8u;
    SET_GPR_U32(ctx, 31, 0x14F9F0u);
    ctx->pc = 0x14F9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F9E8u;
    // 0x14f9ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x14F9E8u, 0x14F9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F9F0u;
label_14f9f0:
    // 0x14f9f0: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x14f9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x14f9f4: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x14f9f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14f9f8: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x14f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x14f9fc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x14f9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x14fa00: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x14fa00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14fa04: 0xc043c56  jal         func_10F158
    ctx->pc = 0x14FA04u;
    SET_GPR_U32(ctx, 31, 0x14FA0Cu);
    ctx->pc = 0x14FA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FA04u;
    // 0x14fa08: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x14FA04u, 0x14FA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FA0Cu;
label_14fa0c:
    // 0x14fa0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14fa0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14fa10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14fa10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14fa14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14fa14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14fa18: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14fa18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14fa1c: 0x3e00008  jr          $ra
    ctx->pc = 0x14FA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA1Cu;
        // 0x14fa20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14FA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14FA24u;
    // 0x14fa24: 0x0  nop
    ctx->pc = 0x14fa24u;
    // NOP
    ctx->pc = 0x14fa28u;
}
