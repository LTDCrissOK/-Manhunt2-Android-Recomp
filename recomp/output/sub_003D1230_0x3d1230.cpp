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

// Function: sub_003D1230
// Address: 0x3d1230 - 0x3d1290
void sub_003D1230_0x3d1230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D1230_0x3d1230");
#endif

    switch (ctx->pc) {
        case 0x3d1230u: goto label_3d1230;
        case 0x3d1234u: goto label_3d1234;
        case 0x3d1238u: goto label_3d1238;
        case 0x3d123cu: goto label_3d123c;
        case 0x3d1240u: goto label_3d1240;
        case 0x3d1244u: goto label_3d1244;
        case 0x3d1248u: goto label_3d1248;
        case 0x3d124cu: goto label_3d124c;
        case 0x3d1250u: goto label_3d1250;
        case 0x3d1254u: goto label_3d1254;
        case 0x3d1258u: goto label_3d1258;
        case 0x3d125cu: goto label_3d125c;
        case 0x3d1260u: goto label_3d1260;
        case 0x3d1264u: goto label_3d1264;
        case 0x3d1268u: goto label_3d1268;
        case 0x3d126cu: goto label_3d126c;
        case 0x3d1270u: goto label_3d1270;
        case 0x3d1274u: goto label_3d1274;
        case 0x3d1278u: goto label_3d1278;
        case 0x3d127cu: goto label_3d127c;
        case 0x3d1280u: goto label_3d1280;
        case 0x3d1284u: goto label_3d1284;
        case 0x3d1288u: goto label_3d1288;
        case 0x3d128cu: goto label_3d128c;
        default: break;
    }

    ctx->pc = 0x3d1230u;

label_3d1230:
    // 0x3d1230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d1230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3d1234:
    // 0x3d1234: 0x308400fe  andi        $a0, $a0, 0xFE
    ctx->pc = 0x3d1234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)254);
label_3d1238:
    // 0x3d1238: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d1238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3d123c:
    // 0x3d123c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3d123cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3d1240:
    // 0x3d1240: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d1240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3d1244:
    // 0x3d1244: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x3d1244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_3d1248:
    // 0x3d1248: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3d1248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_3d124c:
    // 0x3d124c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3d124cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3d1250:
    // 0x3d1250: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x3d1250u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3d1254:
    // 0x3d1254: 0x40f809  jalr        $v0
label_3d1258:
    if (ctx->pc == 0x3D1258u) {
        ctx->pc = 0x3D1258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1254u;
        // 0x3d1258: 0x34640001  ori         $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D125Cu;
        goto label_3d125c;
    }
    ctx->pc = 0x3D1254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D125Cu);
        ctx->pc = 0x3D1258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1254u;
        // 0x3d1258: 0x34640001  ori         $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1254u, 0x3D125Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D125Cu;
label_3d125c:
    // 0x3d125c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3d1260:
    if (ctx->pc == 0x3D1260u) {
        ctx->pc = 0x3D1260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D125Cu;
        // 0x3d1260: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1264u;
        goto label_3d1264;
    }
    ctx->pc = 0x3D125Cu;
    {
        const bool branch_taken_0x3d125c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D1260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D125Cu;
        // 0x3d1260: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d125c) {
            ctx->pc = 0x3D1280u;
            goto label_3d1280;
        }
    }
    ctx->pc = 0x3D1264u;
label_3d1264:
    // 0x3d1264: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3d1264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_3d1268:
    // 0x3d1268: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3d1268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d126c:
    // 0x3d126c: 0x8c6479c0  lw          $a0, 0x79C0($v1)
    ctx->pc = 0x3d126cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31168)));
label_3d1270:
    // 0x3d1270: 0xac7079c0  sw          $s0, 0x79C0($v1)
    ctx->pc = 0x3d1270u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 31168), GPR_U32(ctx, 16));
label_3d1274:
    // 0x3d1274: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x3d1274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_3d1278:
    // 0x3d1278: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3d1278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3d127c:
    // 0x3d127c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d127cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d1280:
    // 0x3d1280: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d1280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d1284:
    // 0x3d1284: 0x3e00008  jr          $ra
label_3d1288:
    if (ctx->pc == 0x3D1288u) {
        ctx->pc = 0x3D1288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1284u;
        // 0x3d1288: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D128Cu;
        goto label_3d128c;
    }
    ctx->pc = 0x3D1284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D1288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1284u;
        // 0x3d1288: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D128Cu;
label_3d128c:
    // 0x3d128c: 0x0  nop
    ctx->pc = 0x3d128cu;
    // NOP
    ctx->pc = 0x3d1290u;
}
