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

// Function: sub_00155220
// Address: 0x155220 - 0x155380
void sub_00155220_0x155220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155220_0x155220");
#endif

    switch (ctx->pc) {
        case 0x155244u: goto label_155244;
        case 0x155258u: goto label_155258;
        case 0x155264u: goto label_155264;
        case 0x155274u: goto label_155274;
        case 0x155284u: goto label_155284;
        case 0x155290u: goto label_155290;
        case 0x1552b4u: goto label_1552b4;
        case 0x1552c0u: goto label_1552c0;
        case 0x1552ccu: goto label_1552cc;
        case 0x155304u: goto label_155304;
        case 0x155314u: goto label_155314;
        case 0x155330u: goto label_155330;
        case 0x15533cu: goto label_15533c;
        case 0x155350u: goto label_155350;
        case 0x15535cu: goto label_15535c;
        default: break;
    }

    ctx->pc = 0x155220u;

    // 0x155220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x155220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x155224: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x155224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x155228: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x155228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15522c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x15522cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x155230: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x155230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x155234: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x155234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x155238: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x155238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x15523c: 0xc055672  jal         func_1559C8
    ctx->pc = 0x15523Cu;
    SET_GPR_U32(ctx, 31, 0x155244u);
    ctx->pc = 0x155240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15523Cu;
    // 0x155240: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1559C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1559C8u, 0x15523Cu, 0x155244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155244u;
label_155244:
    // 0x155244: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x155244u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x155248: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x155248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15524c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15524cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x155250: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x155250u;
    SET_GPR_U32(ctx, 31, 0x155258u);
    ctx->pc = 0x155254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155250u;
    // 0x155254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x155250u, 0x155258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155258u;
label_155258:
    // 0x155258: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x155258u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x15525c: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x15525Cu;
    SET_GPR_U32(ctx, 31, 0x155264u);
    ctx->pc = 0x155260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15525Cu;
    // 0x155260: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x15525Cu, 0x155264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155264u;
label_155264:
    // 0x155264: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x155264u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x155268: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x155268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15526c: 0xc0551e4  jal         func_154790
    ctx->pc = 0x15526Cu;
    SET_GPR_U32(ctx, 31, 0x155274u);
    ctx->pc = 0x155270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15526Cu;
    // 0x155270: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154790u, 0x15526Cu, 0x155274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155274u;
label_155274:
    // 0x155274: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x155274u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x155278: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x155278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15527c: 0xc05527a  jal         func_1549E8
    ctx->pc = 0x15527Cu;
    SET_GPR_U32(ctx, 31, 0x155284u);
    ctx->pc = 0x155280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15527Cu;
    // 0x155280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1549E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1549E8u, 0x15527Cu, 0x155284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155284u;
label_155284:
    // 0x155284: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x155284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155288: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x155288u;
    SET_GPR_U32(ctx, 31, 0x155290u);
    ctx->pc = 0x15528Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155288u;
    // 0x15528c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x155288u, 0x155290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155290u;
label_155290:
    // 0x155290: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x155290u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155294: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x155294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x155298: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x155298u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15529c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x15529cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1552a0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1552a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1552a4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1552a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1552a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1552a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1552ac: 0xc04daca  jal         func_136B28
    ctx->pc = 0x1552ACu;
    SET_GPR_U32(ctx, 31, 0x1552B4u);
    ctx->pc = 0x1552B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1552ACu;
    // 0x1552b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x1552ACu, 0x1552B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1552B4u;
label_1552b4:
    // 0x1552b4: 0x8e250660  lw          $a1, 0x660($s1)
    ctx->pc = 0x1552b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1632)));
    // 0x1552b8: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x1552B8u;
    SET_GPR_U32(ctx, 31, 0x1552C0u);
    ctx->pc = 0x1552BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1552B8u;
    // 0x1552bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x1552B8u, 0x1552C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1552C0u;
label_1552c0:
    // 0x1552c0: 0x8e250668  lw          $a1, 0x668($s1)
    ctx->pc = 0x1552c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1640)));
    // 0x1552c4: 0xc046104  jal         func_118410
    ctx->pc = 0x1552C4u;
    SET_GPR_U32(ctx, 31, 0x1552CCu);
    ctx->pc = 0x1552C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1552C4u;
    // 0x1552c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x1552C4u, 0x1552CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1552CCu;
label_1552cc:
    // 0x1552cc: 0x9222046c  lbu         $v0, 0x46C($s1)
    ctx->pc = 0x1552ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1552d0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1552d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1552d4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1552d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1552d8: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x1552d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x1552dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1552dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1552e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1552e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1552e4: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1552e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1552e8: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1552e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1552ec: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1552ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1552f0: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1552F0u;
    {
        const bool branch_taken_0x1552f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1552F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1552F0u;
        // 0x1552f4: 0x8c94020c  lw          $s4, 0x20C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1552f0) {
            ctx->pc = 0x15531Cu;
            goto label_15531c;
        }
    }
    ctx->pc = 0x1552F8u;
    // 0x1552f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1552f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1552fc: 0xc046290  jal         func_118A40
    ctx->pc = 0x1552FCu;
    SET_GPR_U32(ctx, 31, 0x155304u);
    ctx->pc = 0x155300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1552FCu;
    // 0x155300: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x1552FCu, 0x155304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155304u;
label_155304:
    // 0x155304: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x155304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155308: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x155308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15530c: 0xc04e3f6  jal         func_138FD8
    ctx->pc = 0x15530Cu;
    SET_GPR_U32(ctx, 31, 0x155314u);
    ctx->pc = 0x155310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15530Cu;
    // 0x155310: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138FD8u, 0x15530Cu, 0x155314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155314u;
label_155314:
    // 0x155314: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x155314u;
    {
        const bool branch_taken_0x155314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155314u;
        // 0x155318: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155314) {
            ctx->pc = 0x155334u;
            goto label_155334;
        }
    }
    ctx->pc = 0x15531Cu;
label_15531c:
    // 0x15531c: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x15531cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x155320: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x155320u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x155324: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x155324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x155328: 0xc046290  jal         func_118A40
    ctx->pc = 0x155328u;
    SET_GPR_U32(ctx, 31, 0x155330u);
    ctx->pc = 0x15532Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155328u;
    // 0x15532c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x155328u, 0x155330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155330u;
label_155330:
    // 0x155330: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x155330u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
label_155334:
    // 0x155334: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x155334u;
    SET_GPR_U32(ctx, 31, 0x15533Cu);
    ctx->pc = 0x155338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155334u;
    // 0x155338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x155334u, 0x15533Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15533Cu;
label_15533c:
    // 0x15533c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15533cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155340: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x155340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155344: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x155344u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155348: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x155348u;
    SET_GPR_U32(ctx, 31, 0x155350u);
    ctx->pc = 0x15534Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155348u;
    // 0x15534c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x155348u, 0x155350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155350u;
label_155350:
    // 0x155350: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x155350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155354: 0xc043c56  jal         func_10F158
    ctx->pc = 0x155354u;
    SET_GPR_U32(ctx, 31, 0x15535Cu);
    ctx->pc = 0x155358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155354u;
    // 0x155358: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x155354u, 0x15535Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15535Cu;
label_15535c:
    // 0x15535c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15535cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155360: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x155360u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155364: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x155364u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155368: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x155368u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15536c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x15536cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155370: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x155370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x155374: 0x3e00008  jr          $ra
    ctx->pc = 0x155374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155374u;
        // 0x155378: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15537Cu;
    // 0x15537c: 0x0  nop
    ctx->pc = 0x15537cu;
    // NOP
    ctx->pc = 0x155380u;
}
