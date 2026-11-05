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

// Function: sub_00141198
// Address: 0x141198 - 0x1412d8
void sub_00141198_0x141198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141198_0x141198");
#endif

    switch (ctx->pc) {
        case 0x1411bcu: goto label_1411bc;
        case 0x1411d0u: goto label_1411d0;
        case 0x1411e8u: goto label_1411e8;
        case 0x1411f4u: goto label_1411f4;
        case 0x141204u: goto label_141204;
        case 0x14120cu: goto label_14120c;
        case 0x14121cu: goto label_14121c;
        case 0x141240u: goto label_141240;
        case 0x14124cu: goto label_14124c;
        case 0x141258u: goto label_141258;
        case 0x141264u: goto label_141264;
        case 0x141270u: goto label_141270;
        case 0x14128cu: goto label_14128c;
        case 0x1412a0u: goto label_1412a0;
        case 0x1412bcu: goto label_1412bc;
        default: break;
    }

    ctx->pc = 0x141198u;

    // 0x141198: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x141198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14119c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x14119cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1411a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1411a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1411a4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1411a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1411a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1411a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1411ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1411acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1411b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1411b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1411b4: 0xc0503d0  jal         func_140F40
    ctx->pc = 0x1411B4u;
    SET_GPR_U32(ctx, 31, 0x1411BCu);
    ctx->pc = 0x1411B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1411B4u;
    // 0x1411b8: 0x9265046c  lbu         $a1, 0x46C($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F40u, 0x1411B4u, 0x1411BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1411BCu;
label_1411bc:
    // 0x1411bc: 0x50400040  beql        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x1411BCu;
    {
        const bool branch_taken_0x1411bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1411bc) {
            ctx->pc = 0x1411C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1411BCu;
            // 0x1411c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1412C0u;
            goto label_1412c0;
        }
    }
    ctx->pc = 0x1411C4u;
    // 0x1411c4: 0x9265046c  lbu         $a1, 0x46C($s3)
    ctx->pc = 0x1411c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1132)));
    // 0x1411c8: 0xc0503d0  jal         func_140F40
    ctx->pc = 0x1411C8u;
    SET_GPR_U32(ctx, 31, 0x1411D0u);
    ctx->pc = 0x1411CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1411C8u;
    // 0x1411cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F40u, 0x1411C8u, 0x1411D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1411D0u;
label_1411d0:
    // 0x1411d0: 0x38520001  xori        $s2, $v0, 0x1
    ctx->pc = 0x1411d0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1411d4: 0x9265046c  lbu         $a1, 0x46C($s3)
    ctx->pc = 0x1411d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1132)));
    // 0x1411d8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1411d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1411dc: 0x2e520001  sltiu       $s2, $s2, 0x1
    ctx->pc = 0x1411dcu;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1411e0: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x1411E0u;
    SET_GPR_U32(ctx, 31, 0x1411E8u);
    ctx->pc = 0x1411E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1411E0u;
    // 0x1411e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x1411E0u, 0x1411E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1411E8u;
label_1411e8:
    // 0x1411e8: 0x9265046c  lbu         $a1, 0x46C($s3)
    ctx->pc = 0x1411e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1132)));
    // 0x1411ec: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x1411ECu;
    SET_GPR_U32(ctx, 31, 0x1411F4u);
    ctx->pc = 0x1411F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1411ECu;
    // 0x1411f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x1411ECu, 0x1411F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1411F4u;
label_1411f4:
    // 0x1411f4: 0x9265046c  lbu         $a1, 0x46C($s3)
    ctx->pc = 0x1411f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1132)));
    // 0x1411f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1411f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1411fc: 0xc0503ca  jal         func_140F28
    ctx->pc = 0x1411FCu;
    SET_GPR_U32(ctx, 31, 0x141204u);
    ctx->pc = 0x141200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1411FCu;
    // 0x141200: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F28u, 0x1411FCu, 0x141204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141204u;
label_141204:
    // 0x141204: 0xc0503d6  jal         func_140F58
    ctx->pc = 0x141204u;
    SET_GPR_U32(ctx, 31, 0x14120Cu);
    ctx->pc = 0x141208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141204u;
    // 0x141208: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F58u, 0x141204u, 0x14120Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14120Cu;
label_14120c:
    // 0x14120c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14120cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141210: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x141210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141214: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x141214u;
    SET_GPR_U32(ctx, 31, 0x14121Cu);
    ctx->pc = 0x141218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141214u;
    // 0x141218: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x141214u, 0x14121Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14121Cu;
label_14121c:
    // 0x14121c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14121cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141220: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x141220u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141224: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x141224u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x141228: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x141228u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14122c: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x14122cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x141230: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x141230u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141234: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x141234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141238: 0xc04daca  jal         func_136B28
    ctx->pc = 0x141238u;
    SET_GPR_U32(ctx, 31, 0x141240u);
    ctx->pc = 0x14123Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141238u;
    // 0x14123c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x141238u, 0x141240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141240u;
label_141240:
    // 0x141240: 0x8e650524  lw          $a1, 0x524($s3)
    ctx->pc = 0x141240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1316)));
    // 0x141244: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x141244u;
    SET_GPR_U32(ctx, 31, 0x14124Cu);
    ctx->pc = 0x141248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141244u;
    // 0x141248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x141244u, 0x14124Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14124Cu;
label_14124c:
    // 0x14124c: 0x8e650528  lw          $a1, 0x528($s3)
    ctx->pc = 0x14124cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1320)));
    // 0x141250: 0xc046256  jal         func_118958
    ctx->pc = 0x141250u;
    SET_GPR_U32(ctx, 31, 0x141258u);
    ctx->pc = 0x141254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141250u;
    // 0x141254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x141250u, 0x141258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141258u;
label_141258:
    // 0x141258: 0x8e65052c  lw          $a1, 0x52C($s3)
    ctx->pc = 0x141258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1324)));
    // 0x14125c: 0xc046104  jal         func_118410
    ctx->pc = 0x14125Cu;
    SET_GPR_U32(ctx, 31, 0x141264u);
    ctx->pc = 0x141260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14125Cu;
    // 0x141260: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x14125Cu, 0x141264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141264u;
label_141264:
    // 0x141264: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x141264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141268: 0xc0460c4  jal         func_118310
    ctx->pc = 0x141268u;
    SET_GPR_U32(ctx, 31, 0x141270u);
    ctx->pc = 0x14126Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141268u;
    // 0x14126c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118310u, 0x141268u, 0x141270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141270u;
label_141270:
    // 0x141270: 0x9265046c  lbu         $a1, 0x46C($s3)
    ctx->pc = 0x141270u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1132)));
    // 0x141274: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x141274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141278: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x141278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x14127c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x14127cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x141280: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x141280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x141284: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x141284u;
    SET_GPR_U32(ctx, 31, 0x14128Cu);
    ctx->pc = 0x141288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141284u;
    // 0x141288: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x141284u, 0x14128Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14128Cu;
label_14128c:
    // 0x14128c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14128cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141290: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x141290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141294: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x141294u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141298: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x141298u;
    SET_GPR_U32(ctx, 31, 0x1412A0u);
    ctx->pc = 0x14129Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141298u;
    // 0x14129c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x141298u, 0x1412A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1412A0u;
label_1412a0:
    // 0x1412a0: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1412a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1412a4: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1412a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1412a8: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x1412a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1412ac: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x1412acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1412b0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1412b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1412b4: 0xc043c56  jal         func_10F158
    ctx->pc = 0x1412B4u;
    SET_GPR_U32(ctx, 31, 0x1412BCu);
    ctx->pc = 0x1412B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1412B4u;
    // 0x1412b8: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x1412B4u, 0x1412BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1412BCu;
label_1412bc:
    // 0x1412bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1412bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1412c0:
    // 0x1412c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1412c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1412c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1412c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1412c8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1412c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1412cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1412ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1412d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1412D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1412D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1412D0u;
        // 0x1412d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1412D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1412D8u;
}
