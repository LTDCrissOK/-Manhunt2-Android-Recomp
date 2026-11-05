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

// Function: sub_00358530
// Address: 0x358530 - 0x358690
void sub_00358530_0x358530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358530_0x358530");
#endif

    switch (ctx->pc) {
        case 0x358558u: goto label_358558;
        case 0x358588u: goto label_358588;
        case 0x3585a8u: goto label_3585a8;
        case 0x358600u: goto label_358600;
        default: break;
    }

    ctx->pc = 0x358530u;

    // 0x358530: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x358530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x358534: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x358534u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x358538: 0x2442d3c0  addiu       $v0, $v0, -0x2C40
    ctx->pc = 0x358538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955968));
    // 0x35853c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35853cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x358540: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x358540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x358544: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x358544u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358548: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x358548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x35854c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x35854cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358550: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x358550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x358554: 0x0  nop
    ctx->pc = 0x358554u;
    // NOP
label_358558:
    // 0x358558: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x358558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x35855c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x35855cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x358560: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x358560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x358564: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x358564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x358568: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x358568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35856c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35856cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x358570: 0x1444002d  bne         $v0, $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x358570u;
    {
        const bool branch_taken_0x358570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x358574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358570u;
        // 0x358574: 0x28a60010  slti        $a2, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x358570) {
            ctx->pc = 0x358628u;
            goto label_358628;
        }
    }
    ctx->pc = 0x358578u;
    // 0x358578: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x358578u;
    {
        const bool branch_taken_0x358578 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x35857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358578u;
        // 0x35857c: 0xace50004  sw          $a1, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358578) {
            ctx->pc = 0x358558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358558;
        }
    }
    ctx->pc = 0x358580u;
    // 0x358580: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x358580u;
    {
        const bool branch_taken_0x358580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358580u;
        // 0x358584: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358580) {
            ctx->pc = 0x35862Cu;
            goto label_35862c;
        }
    }
    ctx->pc = 0x358588u;
label_358588:
    // 0x358588: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x358588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35858c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x35858cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x358590: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x358590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x358594: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x358594u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x358598: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x358598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35859c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35859cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3585a0: 0xc0d5f66  jal         func_357D98
    ctx->pc = 0x3585A0u;
    SET_GPR_U32(ctx, 31, 0x3585A8u);
    ctx->pc = 0x3585A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3585A0u;
    // 0x3585a4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357D98u, 0x3585A0u, 0x3585A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3585A8u;
label_3585a8:
    // 0x3585a8: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x3585a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3585ac: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x3585acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3585b0: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x3585b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x3585b4: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x3585b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3585b8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3585b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3585bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3585bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3585c0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3585c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3585c4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x3585c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3585c8: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x3585c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x3585cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3585ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3585d0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x3585d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3585d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3585D4u;
    {
        const bool branch_taken_0x3585d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3585D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3585D4u;
        // 0x3585d8: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3585d4) {
            ctx->pc = 0x3585E8u;
            goto label_3585e8;
        }
    }
    ctx->pc = 0x3585DCu;
    // 0x3585dc: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3585dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3585e0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3585E0u;
    {
        const bool branch_taken_0x3585e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3585E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3585E0u;
        // 0x3585e4: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3585e0) {
            ctx->pc = 0x358628u;
            goto label_358628;
        }
    }
    ctx->pc = 0x3585E8u;
label_3585e8:
    // 0x3585e8: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x3585e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3585ec: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3585ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3585f0: 0x28430010  slti        $v1, $v0, 0x10
    ctx->pc = 0x3585f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3585f4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3585F4u;
    {
        const bool branch_taken_0x3585f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3585F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3585F4u;
        // 0x3585f8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3585f4) {
            ctx->pc = 0x358628u;
            goto label_358628;
        }
    }
    ctx->pc = 0x3585FCu;
    // 0x3585fc: 0x0  nop
    ctx->pc = 0x3585fcu;
    // NOP
label_358600:
    // 0x358600: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x358600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x358604: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x358604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x358608: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x358608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35860c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x35860cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x358610: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x358610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x358614: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x358614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x358618: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x358618u;
    {
        const bool branch_taken_0x358618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x35861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358618u;
        // 0x35861c: 0x28a60010  slti        $a2, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x358618) {
            ctx->pc = 0x358628u;
            goto label_358628;
        }
    }
    ctx->pc = 0x358620u;
    // 0x358620: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x358620u;
    {
        const bool branch_taken_0x358620 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x358624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358620u;
        // 0x358624: 0xad050004  sw          $a1, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358620) {
            ctx->pc = 0x358600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358600;
        }
    }
    ctx->pc = 0x358628u;
label_358628:
    // 0x358628: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x358628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_35862c:
    // 0x35862c: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x35862Cu;
    {
        const bool branch_taken_0x35862c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x358630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35862Cu;
        // 0x358630: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35862c) {
            ctx->pc = 0x358668u;
            goto label_358668;
        }
    }
    ctx->pc = 0x358634u;
    // 0x358634: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x358634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x358638: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x358638u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x35863c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x35863Cu;
    {
        const bool branch_taken_0x35863c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x358640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35863Cu;
        // 0x358640: 0x31900  sll         $v1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35863c) {
            ctx->pc = 0x358668u;
            goto label_358668;
        }
    }
    ctx->pc = 0x358644u;
    // 0x358644: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x358644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x358648: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x358648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x35864c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x35864cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x358650: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x358650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x358654: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x358654u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x358658: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x358658u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x35865c: 0xa2282b  sltu        $a1, $a1, $v0
    ctx->pc = 0x35865cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x358660: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x358660u;
    {
        const bool branch_taken_0x358660 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x358664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358660u;
        // 0x358664: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358660) {
            ctx->pc = 0x35866Cu;
            goto label_35866c;
        }
    }
    ctx->pc = 0x358668u;
label_358668:
    // 0x358668: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x358668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35866c:
    // 0x35866c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35866cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x358670: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x358670u;
    {
        const bool branch_taken_0x358670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x358674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358670u;
        // 0x358674: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358670) {
            ctx->pc = 0x358588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358588;
        }
    }
    ctx->pc = 0x358678u;
    // 0x358678: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x358678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35867c: 0x3e00008  jr          $ra
    ctx->pc = 0x35867Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35867Cu;
        // 0x358680: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35867Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358684u;
    // 0x358684: 0x0  nop
    ctx->pc = 0x358684u;
    // NOP
    // 0x358688: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x358688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35868c: 0x0  nop
    ctx->pc = 0x35868cu;
    // NOP
    ctx->pc = 0x358690u;
}
